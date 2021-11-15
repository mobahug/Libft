/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:44:45 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/15 11:45:38 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	number(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		number(n / 10);
	ft_putchar(n % 10 + 48);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = number(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	//str[i--] = '\0';
	/*if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}*/
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	while (n > 0)
	{
		str[i++] = 48 + (n % 10);
		n = n / 10;
	}
	return (str);
}
/*
int main()
{
    int num = -123123;
    printf("%d is number before itoa\n", num);
    printf("%s is string after itoa", ft_itoa(num));
    return (0);
}
*/
