/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:40:02 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/11 22:40:04 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*holder;

	if (!lst || !*lst)
		return ;
	holder = *lst;
	while (*lst)
	{
		holder = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(holder, del);
	}
	*lst = NULL;
}
