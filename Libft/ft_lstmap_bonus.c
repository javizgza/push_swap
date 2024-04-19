/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:39:58 by jazarago          #+#    #+#             */
/*   Updated: 2023/10/03 13:12:27 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*save;

	if (!lst || !f || !del)
		return (0);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (0);
	save = newlist;
	lst = lst->next;
	while (lst)
	{
		newlist->next = ft_lstnew(f(lst->content));
		if (!newlist->next)
		{
			ft_lstclear(&save, del);
			return (0);
		}
		newlist = newlist->next;
		lst = lst->next;
	}
	newlist->next = NULL;
	return (save);
}
