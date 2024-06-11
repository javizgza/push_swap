/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:11:37 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 22:13:30 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_get_max_digits(t_Stack *stack)
{
    t_Node *current;
    int max_value;
    int max_digits;

    if (!stack || stack->size == 0)
        return (0);
    current = stack->top;
    max_value = current->value;
    while (current != NULL)
    {
        if (current->value > max_value)
            max_value = current->value;
        current = current->next;
    }
    max_digits = 0;
    while (max_value != 0)
    {
        max_value /= 2;
        max_digits++;
    }
    return max_digits;
}

int ft_get_min_value(t_Stack *stack)
{
    t_Node *current;
    int min_value;

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
    return min_value;
}
