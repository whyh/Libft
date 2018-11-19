/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:54:39 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/08 17:42:13 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;
	t_list	*head;
	t_list	*l;

	if (lst == NULL)
		return (NULL);
	node = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (node == NULL)
		return (NULL);
	head = node;
	l = lst;
	while (l->next != NULL)
	{
		l = l->next;
		node->next = ft_lstnew(f(l)->content, f(l)->content_size);
		node = node->next;
	}
	return (head);
}
