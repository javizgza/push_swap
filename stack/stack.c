/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:27:37 by javi              #+#    #+#             */
/*   Updated: 2024/06/12 11:06:01 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_Stack	*ft_create_empty_stack(void)
{
	t_Stack	*stack;

	stack = (t_Stack *)malloc(sizeof(t_Stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

void	ft_destroy_stack(t_Stack *stack)
{
	while (stack->top)
		ft_pop(stack);
	free(stack);
}

int	ft_stack_push(t_Stack *stack, int value)
{
	t_Node	*new_node;

	new_node = ft_new_node(value, 0);
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
	return (1);
}

void	ft_pop(t_Stack *stack)
{
	t_Node	*node_to_delete;

	if (stack->top)
	{
		node_to_delete = stack->top;
		stack->top = stack->top->next;
		ft_remove_node(node_to_delete);
		stack->size--;
	}
}
