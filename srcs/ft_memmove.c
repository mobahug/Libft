/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:04:51 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/08 12:32:08 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned int	i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest == 0 && source == 0)
		return (NULL);
	if (source < dest)
	{
		while (0 < len)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
		return (dest);
	}
	else if (source > dest)
	{
		i = -1;
		while (i++ < len - 1)
			dest[i] = source[i];
		return (dest);
	}
	return (0);
}
