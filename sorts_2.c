/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:46:44 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 21:51:43 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_sorted(t_Stack *stack)
{
    t_Node *current;

    if (!stack || stack->size < 2)
        return (1);

    current = stack->top;
    while (current->next != NULL)
    {
        if (current->value > current->next->value)
            return 0;
        current = current->next;
    }
    return (1);
}


void ft_perform_sort(t_Stack *stack_a, t_Stack *stack_b)
{
    if (ft_is_sorted(stack_a))
        return;

    if (stack_a->size <= 1)
        return;

    if (stack_a->size == 2)
    {
        if (stack_a->top->value > stack_a->top->next->value)
            ft_swap_a(stack_a);
    }
    else if (stack_a->size == 3)
    {
        ft_sort_three_elements(stack_a);
    }
    else if (stack_a->size == 4 || stack_a->size == 5)
    {
        ft_sort_four_or_five(stack_a, stack_b);
    }
    else
    {
        ft_large_sort(stack_a, stack_b);
    }
}
