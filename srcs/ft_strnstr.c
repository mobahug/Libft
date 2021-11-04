/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:59:46 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/04 11:23:05 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *searchString, size_t len)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)str;
	if (*searchString == '\0')
		return (s);
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i + j] == searchString[j] && s[i + j] != '\0' && (j + i) < len)
		{
			if (searchString[j + 1] == '\0')
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
