/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:46:46 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/10 15:08:22 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char	*s_s;
	int		i;

	i = 0;
	s_s = (char *)s;
	while (s_s[i] != '\0')
	{
		write(fd, &s_s[i], 1);
		i++;
	}
}
