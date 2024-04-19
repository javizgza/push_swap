/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:14:48 by jazarago          #+#    #+#             */
/*   Updated: 2023/10/03 13:50:31 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*this;
	t_list	*forward;

	this = *lst;
	if (!(this))
		return ;
	while (this)
	{
		forward = this->next;
		del(this->content);
		free(this);
		this = forward;
	}
	*lst = NULL;
}
