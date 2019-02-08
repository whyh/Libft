/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:54:39 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 16:54:29 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*head;

	new_lst = f(lst);
	head = new_lst;
	lst = lst->next;
	while (lst != NULL)
	{
		new_lst->next = f(lst);
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (head);
}
