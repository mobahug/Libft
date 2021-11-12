/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:44:45 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/12 15:55:05 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	*ft_itoa(int n)
{
	ft_strnew(n);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	while (n >= 0 && n <= 9)
		result = (result * 10) + (n[i++] - 0);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		result;
	int		base;
	int		i;

	i = 0;
	result = n;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n == 0)
	{
		str[i] = '0';
		str[i + i] = '\0';
		return (str);
	}
	while (n != 0)
	{
		result = n % base;
		if (result > 9)
			str[i++] = result - 10 + 'A';
		else
			str[i++] = result + '0';
		n = n / base;
	}
	str[i] = '\0';
	return (str);
}
