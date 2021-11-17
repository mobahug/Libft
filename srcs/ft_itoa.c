/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:44:45 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/17 09:53:34 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	number(int n)
{
	if (n < 0)
	{
		//ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		number(n / 10);
	//ft_putchar(n % 10 + 48);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = number(n);
	str = (char *)malloc(sizeof(char) * number(n) + 1);
	if (str == 0)
		return (0);
	str[i--] = '\0';
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	while (n > 0)
	{
		str[i--] = 48 + (n % 10);
		//result = (result * 10) + (str[i++] - '0');
		n = n / 10;
	}
	return (str);
}


