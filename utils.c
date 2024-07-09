/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:11:37 by javi              #+#    #+#             */
/*   Updated: 2024/07/09 17:17:57 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_max_digits(t_Stack *stack)
{
	t_Node	*current;
	int		max_digits;
	int		current_digits;

	if (!stack || stack->size == 0)
		return (0);
	current = stack->top;
	max_digits = 0;
	while (current != NULL)
	{
		current_digits = 0;
		int position = current->pos;
		while (position != 0)
		{
			position /= 2;
			current_digits++;
		}
		if (current_digits > max_digits)
			max_digits = current_digits;
		current = current->next;
	}
	return (max_digits);
}

int	ft_get_min_value(t_Stack *stack)
{
	t_Node	*current;
	int		min_value;

	if (!stack || stack->size == 0)
		return (0);
	current = stack->top;
	min_value = current->value;
	while (current != NULL)
	{
		if (current->value < min_value)
			min_value = current->value;
		current = current->next;
	}
	return (min_value);
}
