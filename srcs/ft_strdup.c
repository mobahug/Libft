/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:38:46 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/04 11:23:16 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*newletter;

	i = 0;
	newletter = 0;
	newletter = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (newletter == 0)
		return (0);
	while (src[i])
	{
		newletter[i] = src[i];
		i++;
	}
	newletter[i] = '\0';
	return (newletter);
}
