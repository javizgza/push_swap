/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:25:37 by javi              #+#    #+#             */
/*   Updated: 2024/06/12 10:42:57 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node	*ft_new_node(int value, int pos)
{
	t_Node	*new_node;

	new_node = (t_Node *)malloc(sizeof(t_Node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->pos = pos;
	new_node->next = NULL;
	return (new_node);
}

void	ft_remove_node(t_Node *node)
{
	node->next = NULL;
	free(node);
}
