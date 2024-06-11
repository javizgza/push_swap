/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:19:29 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 23:10:11 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_swap_top(t_Stack *stack)
{
    t_Node *first;
    t_Node *second;

    if (stack->size < 2)
        return;
    first = stack->top;
    second = first->next;
    first->next = second->next;
    second->next = first;
    stack->top = second;
}

void ft_op_push(t_Stack *from, t_Stack *to)
{
    t_Node *node_to_move;

    if (from->size == 0)
        return;
    node_to_move = from->top;
    from->top = node_to_move->next;
    node_to_move->next = to->top;
    to->top = node_to_move;
    from->size--;
    to->size++;
}

void ft_push_to(t_Stack *from, t_Stack *to)
{
    ft_op_push(from, to);
}

void ft_rotate_top(t_Stack *stack)
{
    t_Node *first;
    t_Node *last;

    if (stack->size < 2)
        return;
    first = stack->top;
    stack->top = first->next;
    last = first;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = first;
    first->next = NULL;
}

void ft_reverse_rotate_top(t_Stack *stack)
{
    t_Node *first;
    t_Node *last;
    t_Node *second_last;

    if (stack->size < 2)
        return;
    first = stack->top;
    last = stack->top;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    second_last->next = NULL;
    last->next = first;
    stack->top = last;
}
