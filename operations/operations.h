/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:41:15 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 22:44:57 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "../push_swap.h"

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
void ft_swap_b(t_Stack *stack_b);
void ft_push_b(t_Stack *stack_b, t_Stack *stack_a);
void ft_rotate_b(t_Stack *stack_b);
void ft_swap_a(t_Stack *stack_a);
void ft_rotate_a(t_Stack *stack_a);
void ft_push_a(t_Stack *stack_a, t_Stack *stack_b);
int ft_validate_arguments(char *argument);
int ft_validate_segments(char **segments);
int ft_count_elements(char **elements);
void ft_rotate_top(t_Stack *stack);
void ft_swap_top(t_Stack *stack);
void ft_op_push(t_Stack *from, t_Stack *to);
void ft_push_to(t_Stack *from, t_Stack *to);


/* FUNCTIONS */
void ft_reverse_rotate_top(t_Stack *stack);
void ft_rotate_top(t_Stack *stack);

#endif
