/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:08:02 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/24 15:46:46 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list	*(*f)(t_list *elem))
{
	t_list	*str;

	if (!lst)
		return (0);
	str = (char *)malloc(sizeof(char) * ft_strlen(lst) + 1);
	if (!str || !lst)
		return (NULL);
	while (lst)
	{
		*str = *(*f)(lst);
		lst = lst->next;
		lst++;
	}
	*str = '\0';
	return (str);
}
