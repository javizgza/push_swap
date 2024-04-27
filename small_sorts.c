/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:35:55 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/27 10:05:12 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_two(t_stack **stka)
{
    ft_sa(stka, 0);
}

int ft_highest_num(t_stack *stka)
{
    int highest_num = stka->first_stk_num;
    while (stka)
    {
        if (stka->highest_num > highest_num)
        {
            highest_num = stka->highest_num; // Corrige la asignación aquí
        }
        stka = stka->next;
    }
    return highest_num;
}

void ft_sort_three(t_stack **stka)
{
    int highest_num;
    
    if (ft_order_check(*stka))
        return;
    highest_num = ft_highest_num(*stka);
    if ((*stka)->first_stk_num == highest_num) // Corrige la comparación
    {
        ft_ra(stka, 0);
        if (!ft_order_check(*stka))
            ft_sa(stka, 0);
    }
    else if ((*stka)->next->first_stk_num == highest_num) // Corrige la comparación
    {
        ft_rra(stka, 0);
        if (!ft_order_check(*stka))
            ft_sa(stka, 0);
    }
    else if ((*stka)->next->next->first_stk_num == highest_num) // Corrige la comparación
    {
        ft_sa(stka, 0);
    }
}