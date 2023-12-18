/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:30:41 by jazarago          #+#    #+#             */
/*   Updated: 2023/12/18 18:05:48 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_stack_b(int content)
{
    t_stack *new_stack;

    new_stack = malloc(sizeof (t_stack));
    if (!new_stack)
        ft_error();
	new_stack->nbr = content;
	new_stack->next = NULL;
	return (new_stack);
}

// this function creates the new stack that allows the swapping //