/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:03:59 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/19 17:51:51 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <limits.h>

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
int 	ft_order_check(t_stack *stka);
void	ft_rrr(t_stack **a, t_stack **b, int i);
void	ft_ss(t_stack **a, t_stack **b, int i);
void	ft_rr(t_stack **a, t_stack **b, int i);
void	ft_pb(t_stack **a, t_stack **b, int i);
void	ft_rrb(t_stack **b, int j);
void	ft_sb(t_stack **b, int i);
void	ft_rb(t_stack **b, int i);
void	ft_pa(t_stack **a, t_stack **b, int i);
void	ft_rra(t_stack **a, int j);
void	ft_sa(t_stack **a, int i);
void	ft_ra(t_stack **a, int i);
t_stack	**ft_stk_b(t_stack **stack_a);
t_stack	**ft_parse(int argc, char **argv);
int		ft_validargs(int argc, char **argv);
void	ft_free_args(char **str);
int		ft_notnumber(char *str);
void	ft_error(char *msg);
t_stack	**ft_stk_b(t_stack **stack_a);
t_stack **ft_complete_stk(char **argv, int large, int i);
int		ft_bit_placement(int number, int i);
void	ft_free_stk(t_stack **stk);
int		ft_size_stk_a(t_stack *stk);
void	ft_sort_two(t_stack **stka);
void	ft_sort_three(t_stack *stka);
void	ft_big_radix_sort(t_stack *a, t_stack *b);

#endif