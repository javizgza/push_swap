/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:17:22 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/27 10:21:25 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "Libft/libft.h"


typedef struct s_stack
{
	long			number;
	struct s_stack	*next;
	struct s_stack	*prev;
	int				argvalue;
	int				first_stk_num;
	int				highest_num;
	int				size;
	int				upper;
	int				counter;
}					t_stack;


/* FUNCTIONS */
t_stack *ft_stacklast(t_stack *stk);
int	ft_size_stk_a(t_stack *stk);
t_stack **ft_complete_stk(char **argv, int large, int i);
int ft_order_check(t_stack *stka);
void ft_sort_two(t_stack **stka);
int ft_highest_num(t_stack *stka);
void ft_sort_three(t_stack **stka);
t_stack **ft_parse(int argc, char **argv);
void	ft_rr(t_stack **a, t_stack **b, int i);
void	ft_ss(t_stack **a, t_stack **b, int i);
void	ft_rrr(t_stack **a, t_stack **b, int i);
void	ft_pb(t_stack **a, t_stack **b, int i);
void	ft_rrb(t_stack **b, int j);
void	ft_sb(t_stack **b, int i);
void	ft_rb(t_stack **b, int i);
void	ft_ra(t_stack **a, int i);
void	ft_sa(t_stack **a, int i);
void	ft_rra(t_stack **a, int j);
void	ft_pa(t_stack **a, t_stack **b, int i);
void	ft_free_stk(t_stack **stk);
void	ft_free_args(char **str);
void	ft_error(char *msg);
t_stack	**ft_stk_b(t_stack **stack_a);
void ft_big_radix_sort(t_stack *a, t_stack *b) ;
int	ft_bit_placement(int number, int i);
int ft_max_num_bytes(t_stack *stk) ;
int	ft_notnumber(char *str);
int	ft_validargs(int argc, char **argv);

#endif