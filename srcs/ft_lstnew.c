/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 07:20:47 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/26 13:09:08 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_list_filler(t_list **list, void const *content, size_t content_size)
{
	(*list)->content = (void *)malloc(content_size);
	if (!(*list)->content)
	{
		free(*list);
		return (NULL);
	}
	ft_memcpy((*list)->content, content, content_size);
	(*list)->content_size = content_size;
	return (*list);
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list *));
	if (!list)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
		return (list);
	}
	return (ft_list_filler(&list, content, content_size));
}
