/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:53:49 by jazarago          #+#    #+#             */
/*   Updated: 2023/10/03 13:16:57 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newn;

	newn = (t_list *)malloc(sizeof(t_list));
	if (newn == NULL)
	{
		return (NULL);
	}
	newn->content = content;
	newn->next = NULL;
	return (newn);
}
