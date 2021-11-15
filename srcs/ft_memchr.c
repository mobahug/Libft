/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:10:24 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/15 12:53:22 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*s1;
	size_t			i;

	chr = (unsigned char)c;
	s1 = (unsigned char *)s;
	if (*s1 == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*s1 == chr)
			return (s1);
		s1++;
		i++;
	}
	return (0);
}
