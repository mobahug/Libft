/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:14:45 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/08 10:53:18 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	unsigned int	i;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (*dst2 == 0 && *src2 == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (dst2[i] == c)
			return (&(dst[i]));
		i++;
	}
	return (0);
}
