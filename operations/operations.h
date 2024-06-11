/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:41:15 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 17:41:21 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "../push_swap.h"

// Funciones de operaciones de pilas
void ft_swap_a(t_Stack *stack_a);
void ft_swap_b(t_Stack *stack_b);
void ft_swap_both(t_Stack *stack_a, t_Stack *stack_b);
void ft_push_a(t_Stack *stack_a, t_Stack *stack_b);
void ft_push_b(t_Stack *stack_b, t_Stack *stack_a);
void ft_rotate_a(t_Stack *stack_a);
void ft_rotate_b(t_Stack *stack_b);
void ft_rotate_both(t_Stack *stack_a, t_Stack *stack_b);
void ft_reverse_rotate_a(t_Stack *stack_a);
void ft_reverse_rotate_b(t_Stack *stack_b);
void ft_reverse_rotate_both(t_Stack *stack_a, t_Stack *stack_b);

#endif
