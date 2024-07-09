/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:17:22 by jazarago          #+#    #+#             */
/*   Updated: 2024/07/09 15:09:20 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "Libft/libft.h"
# include "stack/stack.h"
# include "operations/operations.h"

int		ft_validate_argument(char *argument);
int		ft_validate_arguments(char *argument);
int		ft_safe_atoi(const char *str, int *valid);
long	ft_parse_number(const char *str, long value, int *sign);
int		ft_is_space(char c);
t_Stack	*ft_add_elements(char **arguments);
int		ft_element_count(char **items);
int		ft_load_elements_into_stack(t_Stack *stack, char **items);
void	ft_execute_sort(t_Stack *stack_a, t_Stack *stack_b);
void	ft_sort_three_elements(t_Stack *stack_a);
void	ft_sort_four_or_five(t_Stack *stack_a, t_Stack *stack_b);
void	ft_large_sort(t_Stack *stack_a, t_Stack *stack_b);
void	ft_swap_a(t_Stack *stack_a);
void	ft_swap_b(t_Stack *stack_b);
void	ft_swap_both(t_Stack *stack_a, t_Stack *stack_b);
void	ft_push_a(t_Stack *stack_a, t_Stack *stack_b);
void	ft_push_b(t_Stack *stack_b, t_Stack *stack_a);
void	ft_rotate_a(t_Stack *stack_a);
void	ft_rotate_b(t_Stack *stack_b);
void	ft_rotate_both(t_Stack *stack_a, t_Stack *stack_b);
void	ft_reverse_rotate_a(t_Stack *stack_a);
void	ft_reverse_rotate_b(t_Stack *stack_b);
void	ft_reverse_rotate_both(t_Stack *stack_a, t_Stack *stack_b);
t_Node	*ft_new_node(long value, int pos);
void	ft_remove_node(t_Node *node);
t_Stack	*ft_create_empty_stack(void);
void	ft_destroy_stack(t_Stack *stack);
int		ft_stack_push(t_Stack *stack, long value);
void	ft_pop(t_Stack *stack);
int		ft_is_max_on_top(t_Stack *stack);
int		ft_is_max_on_bottom(t_Stack *stack);
t_Node	*ft_find_min_node(t_Stack *stack);
int		ft_find_max_position(t_Stack *stack);
void	ft_assign_partial_positions(t_Stack *stack, t_Node *current, \
		long *min_value);
void	ft_assign_positions(t_Stack *stack);
int		ft_validate_positions(t_Stack *stack);
int		ft_start(int arg_count, char **arg_values);
int		ft_execute(char **arguments);
void	get_leaks(void);
void	ft_perform_sort(t_Stack *stack_a, t_Stack *stack_b);
int		ft_is_sorted(t_Stack *stack);
int		ft_get_max_digits(t_Stack *stack);
int		ft_get_min_value(t_Stack *stack);
int		ft_check_only_num(t_Stack *stack);

#endif
