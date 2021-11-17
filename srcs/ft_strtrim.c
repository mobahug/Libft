/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:36:03 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/17 15:59:19 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;

	i = ft_strcpy(s);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == 0 || s == 0)
		return (0);
	str[i--] = '\0';
	while (str[i] != '\0')
		{
			if (str[i] != ' ' || str[i] != '\n' || str[i] != '\t')
				return (s);
			i++;
		}
	return (0);
}
*/
//function to skip white spaces
int	ft_white_spaces(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

//iterating through alll the whitespaces until we reach the first string
int	first_position(char const *str)
{
	int	i;

	i = 0;
	while (ft_white_spaces(str[i]))
		i++;
	return (i);
}

//find the last position of the string what is not whitespace
int	last_position(char const *str)
{
	int	i;

	i = ft_strlen(str) - 1; //-1 cuz the '\0'
	while (ft_white_spaces(str[i]))
		i--;
	return (i);
}

//returning the correct size of the string

int	trim_lenght(char const *str)
{
	return (last_position(str) - first_position(str));
}

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		len;
	int		i;
	int		start;
	//int		end;

	trim = 0;
	i = 0;
	if (s != 0)
	{
		len = trim_lenght(s) + 1;
		trim = (char *)malloc(sizeof(char) * len);
		start = first_position(s);
		if (trim == 0)
			return (0);
		while (i < len)
		{
			trim[i] = s[start];
			i++;
			start++;
		}
		trim[i] = '\0';
	}

	return (trim);
}
