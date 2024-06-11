/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:20:24 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 18:21:17 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_swap_a(t_Stack *stack_a)
{
	ft_swap_top(stack_a);
	write(1, "sa\n", 3);
}

void ft_pa(t_Stack *a, t_Stack *b)
{
	ft_op_push(b, a);
	write(1, "pa\n", 3);
}

void ft_push_a(t_Stack *stack_a, t_Stack *stack_b)
{
	ft_push_to(stack_b, stack_a);
	write(1, "pa\n", 3);
}
