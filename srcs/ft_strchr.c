/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:38:34 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/08 14:04:54 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*s1;

	s1 = (char *)s;
	while (*s1 != c)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
	}
	return (s1);
}

int	main()
{
	const char	s1[100] = "How are you Gabor?";
	const char	s2 = 'G';

	char *ptr;

	ptr = strchr(s1, s2);
	printf("String starting from %c is: %s", s2, ptr);
	return (0);


}
