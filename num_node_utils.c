/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_node_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:30:50 by javi              #+#    #+#             */
/*   Updated: 2024/06/12 10:44:56 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_max_on_top(t_Stack *stack)
{
	t_Node	*current;
	int		max_value;

	current = stack->top->next;
	max_value = stack->top->value;
	while (current)
	{
		if (current->value > max_value)
			max_value = current->value;
		current = current->next;
	}
	free(current);
	if (max_value == stack->top->value)
		return (1);
	return (0);
}

int	ft_is_max_on_bottom(t_Stack *stack)
{
	t_Node	*current;
	int		last_value;
	int		max_value;

	current = stack->top;
	while (current->next)
		current = current->next;
	last_value = current->value;
	max_value = last_value;
	current = stack->top;
	while (current)
	{
		if (current->value > last_value)
			max_value = current->value;
		current = current->next;
	}
	free(current);
	if (max_value == last_value)
		return (1);
	return (0);
}

t_Node	*ft_find_min_node(t_Stack *stack)
{
	t_Node	*current;
	t_Node	*min_node;
	int		min_value;

	if (stack->size == 1)
		return (stack->top);
	current = stack->top->next;
	min_value = stack->top->value;
	min_node = stack->top;
	while (current)
	{
		if (current->value < min_value)
		{
			min_value = current->value;
			min_node = current;
		}
		current = current->next;
	}
	return (min_node);
}

int	ft_find_max_position(t_Stack *stack)
{
	t_Node	*current;
	int		max_pos;

	current = stack->top;
	max_pos = 0;
	while (current)
	{
		if (current->pos > max_pos)
			max_pos = current->pos;
		current = current->next;
	}
	return (max_pos);
}
