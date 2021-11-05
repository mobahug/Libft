/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:05:42 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/05 10:56:44 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t n)
{
	unsigned char	*p;

	p = dest;
	while (0 < n)
	{
		*p = value;
		p++;
		n--;
	}
	return (dest);
}
