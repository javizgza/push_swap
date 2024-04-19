/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:01:33 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/09 10:15:44 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*finish;

	finish = *lst;
	if ((*lst))
	{
		while (finish->next != NULL)
			finish = finish->next;
		finish->next = new;
	}
	if (!(*lst))
		((*lst)) = new;
}
