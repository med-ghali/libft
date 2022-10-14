/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:53:27 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/11 22:53:29 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_linked_list;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	new_linked_list = ft_lstnew(f(lst->content));
	head = new_linked_list;
	lst = lst->next;
	while (lst)
	{
		new_linked_list->next = ft_lstnew(f(lst->content));
		if (!new_linked_list->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_linked_list = new_linked_list->next;
		lst = lst->next;
	}
	return (head);
}
