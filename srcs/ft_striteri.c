/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:30:21 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/09 09:51:22 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void	(*f)(unsigned int, char *))
{
	unsigned int	i;

	if (*s == NULL || *f == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
