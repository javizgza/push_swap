/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_positions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:36:55 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 18:37:50 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_assign_partial_positions(t_Stack *stack, t_Node *current, int *min_value)
{
	t_Node *inner;
	int smallest_gap;

	smallest_gap = 0;
	if (current->value > *min_value)
	{
		smallest_gap = current->value - *min_value;
		inner = stack->top;
		while (inner)
		{
			if (inner->value > *min_value)
			{
				if (inner->value - *min_value < smallest_gap)
					smallest_gap = inner->value - *min_value;
			}
			inner = inner->next;
		}
		if (current->value - *min_value == smallest_gap)
		{
			current->pos = ft_find_max_position(stack) + 1;
			*min_value = current->value;
		}
	}
}

void ft_assign_positions(t_Stack *stack)
{
	int min_value;
	t_Node *current;

	min_value = ft_find_min_node(stack)->value;
	while (!ft_validate_positions(stack))
	{
		current = stack->top;
		while (current)
		{
			ft_assign_partial_positions(stack, current, &min_value);
			current = current->next;
		}
	}
}

int ft_validate_positions(t_Stack *stack)
{
	t_Node *current;
	int zero_positions;

	current = stack->top;
	zero_positions = 0;
	while (current)
	{
		if (current->pos == 0)
			zero_positions++;
		current = current->next;
	}
	if (zero_positions > 1)
		return (0);
	return (1);
}

