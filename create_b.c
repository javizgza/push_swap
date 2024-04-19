/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:26:43 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/11 19:34:40 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**ft_stk_b(t_stack **stack_a)
{
	t_stack	**b;

	b = (t_stack **)ft_calloc(ft_size_stk_a(*stack_a), sizeof(t_stack *));
	return (b);
}