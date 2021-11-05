/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:00:45 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/05 11:50:22 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *start, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = start;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
