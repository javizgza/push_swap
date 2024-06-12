/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:35:55 by jazarago          #+#    #+#             */
/*   Updated: 2024/06/12 10:58:44 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execute_sort(t_Stack *stack_a, t_Stack *stack_b)
{
	if (ft_is_sorted(stack_a) != 1)
	{
		if (stack_a->size == 2)
			ft_swap_a(stack_a);
		else if (stack_a->size == 3)
			ft_sort_three_elements(stack_a);
		else if (stack_a->size == 4 || stack_a->size == 5)
			ft_sort_four_or_five(stack_a, stack_b);
		else
			ft_large_sort(stack_a, stack_b);
	}
}

void	ft_sort_three_elements(t_Stack *stack_a)
{
	if (ft_is_max_on_top(stack_a))
		ft_rotate_a(stack_a);
	else if (ft_is_max_on_bottom(stack_a))
		ft_swap_a(stack_a);
	else
		ft_reverse_rotate_a(stack_a);
	if (!ft_is_sorted(stack_a))
		ft_sort_three_elements(stack_a);
}

void	ft_sort_four_or_five(t_Stack *stack_a, t_Stack *stack_b)
{
	int	min_value;

	min_value = ft_get_min_value(stack_a);
	if (stack_a->top->next->value == min_value)
		ft_rotate_a(stack_a);
	else
		while (stack_a->top->value != min_value)
			ft_reverse_rotate_a(stack_a);
	ft_push_b(stack_b, stack_a);
	if (stack_a->size == 3)
		ft_sort_three_elements(stack_a);
	else
		ft_sort_four_or_five(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
}

int	ft_bit_check(int num, int pos)
{
	return ((num >> pos) & 1);
}

void	ft_large_sort(t_Stack *stack_a, t_Stack *stack_b)
{
	int	counters[2];
	int	stack_size;
	int	max_digits;

	stack_size = stack_a->size;
	max_digits = ft_get_max_digits(stack_a);
	counters[0] = 0;
	while (counters[0] < max_digits)
	{
		counters[1] = 0;
		while (counters[1] < stack_size)
		{
			if (ft_bit_check(stack_a->top->pos, counters[0]))
				ft_rotate_a(stack_a);
			else
				ft_push_b(stack_b, stack_a);
			counters[1]++;
		}
		while (stack_b->size > 0)
			ft_push_a(stack_a, stack_b);
		counters[0]++;
	}
}
