/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:51:55 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/04 13:34:06 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	i = 0;
	while (s1[i] != '\0')
		i++;
	result = 0;
	while (s2[result] != '\0')
		result++;
	if (n <= i)
		result = result + n;
	else
		result = result + i;
	j = 0;
	while (s2[j] != '\0' && i + 1 < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (result);
}
