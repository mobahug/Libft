/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:04:51 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/15 11:27:49 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest == 0 && source == 0)
		return (0);
	if (source < dest)
	{
		while (len--)
			dest[len] = source[len];
		return (dest);
	}
	else if (source > dest)
	{
		while (len--)
		{
			*dest = *source;
			dest++;
			source++;
		}
		return (dest);
	}
	return (0);
}
