/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:11:50 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/12 15:57:51 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		index;
	char	**ptr;
	unsigned char	*s_s;

	s_s = (unsigned char *)s;
	*ptr = (char *)ft_strnew(sizeof(*s_s));
	index = 0;
	while (ptr[s_s][index++] != '\0')
		ptr++;
	if (ptr[s_s][index] == c)
		return (0);
	else
		return (ptr);
}

char	**ft_strsplit(char const *s, char c)
{
	char			*ptr;
	unsigned char	*s_s;
	int				count;

	s_s = (unsigned *)s;
	count = 0;
	while (s_s[count] != '\0')
	{
		ptr[count] = (char *)malloc(sizeof(ft_strlen(s_s) + 1));
		if (s_s[count] = c)
			count++;
	}
	//ft_strlen(s_s);
	//*ptr = (char *)ft_strnew(sizeof(*s_s));

}
