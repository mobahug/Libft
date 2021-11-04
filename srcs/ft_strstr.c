/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:20:26 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/04 11:23:04 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *searchString)
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
		while (s[i + j] == searchString[j] && s[i + j] != '\0')
		{
			if (searchString[j + 1] == '\0')
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
