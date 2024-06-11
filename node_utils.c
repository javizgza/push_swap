/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:25:37 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 23:16:09 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node *ft_new_node(int value, int pos)
{
	t_Node *new_node;

	new_node = (t_Node *)malloc(sizeof(t_Node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->pos = pos;
	new_node->next = NULL;
	return (new_node);
}

void ft_remove_node(t_Node *node)
{
	node->next = NULL;
	free(node);
}

/*t_Stack *ft_create_empty_stack(void)
{
	t_Stack *stack;

	stack = (t_Stack *)malloc(sizeof(t_Stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}*/

/*void ft_destroy_stack(t_Stack *stack)
{
	while (stack->top)
		ft_pop(stack);
	free(stack);
}*/

