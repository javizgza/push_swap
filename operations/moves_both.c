/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_both.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:22:32 by javi              #+#    #+#             */
/*   Updated: 2024/06/12 11:12:53 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_both(t_Stack *stack_a, t_Stack *stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
}

void	ft_rotate_both(t_Stack *stack_a, t_Stack *stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
}

void	ft_reverse_rotate_both(t_Stack *stack_a, t_Stack *stack_b)
{
	ft_reverse_rotate_a(stack_a);
	ft_reverse_rotate_b(stack_b);
}
