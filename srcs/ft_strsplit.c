/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:16:16 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/23 14:50:21 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			words++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (words);
}

char	*ft_get_word(char *word, char c)
{
	char	*start;

	start = word;
	while (*word && *word != c)
		word++;
	*word = '\0';
	return (ft_strdup(start));
}

void	ft_free_words(char **words, size_t i)
{
	while (i--)
		ft_strdel(&(words[i]));
	free(*words);
}

char	**ft_get_words(char *s, char c, size_t word_counter)
{
	char	**words;
	char	*word;
	size_t	i;

	i = 0;
	words = (char **)malloc(sizeof(char *) * (word_counter + 1));
	if (words)
	{
		while (i < word_counter)
		{
			while (*s == c)
				s++;
			if (*s)
			{
				if (!(word = ft_get_word(s, c)))
				{
					ft_free_words(words, i);
					return (NULL);
				}
				words[i++] = word;
				s = s + (ft_strlen(word) + 1);
			}
		}
		words[i] = 0;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	*line;

	if (!s || !(line = (ft_strdup((char *)s))))
		return (NULL);
	words = ft_get_words(line, c, ft_countwords(line, c));
	free(line);
	return (words);
}
