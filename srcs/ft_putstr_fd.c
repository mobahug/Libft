/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:46:46 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/15 09:09:12 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char	*s_s;
	int		i;

	s_s = (char *)s;
	i = 0;
	while (s_s[i] != '\0')
	{
		write(fd, &s_s[i], 1);
		i++;
	}
}
