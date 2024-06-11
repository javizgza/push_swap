/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:21:41 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 23:10:51 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_swap_b(t_Stack *stack_b)
{
	ft_swap_top(stack_b);
	write(1, "sb\n", 3);
}

void ft_push_b(t_Stack *stack_b, t_Stack *stack_a)
{
	ft_push_to(stack_a, stack_b);
	write(1, "pb\n", 3);
}

void ft_rotate_b(t_Stack *stack_b)
{
	ft_rotate_top(stack_b);
	write(1, "rb\n", 3);
}

void ft_reverse_rotate_b(t_Stack *stack_b)
{
    ft_reverse_rotate_top(stack_b);
    write(1, "rrb\n", 4);
}
