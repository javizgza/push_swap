/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:00:42 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/18 12:24:07 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	<stdlib.h>
#include	"../Libft/libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void    ft_error(void);
int		ft_new_atoi(char	*str);
void	ft_onlytwoelements(int *a, int *b);
t_stack	ft_way(int  argc, char **argv);
t_stack	ft_stack(int stack);
void	ft_ra(t_stack **a, int i);
void	ft_sa(t_stack **a, int i);
void 	ft_rra(t_stack **a, int i);
void	ft_pa(t_stack **a, t_stack **b, int i);
void	ft_rb(t_stack **b, int i);
void	ft_sb(t_stack **b, int i);
void	ft_rrb(t_stack **b, int i);
void	ft_pb(t_stack **a, t_stack **b, int i);
int		ft_duplicatenum(t_stack *a);
void	ft_rr(t_stack **a, t_stack **b, int i);
void	ft_ss(t_stack **a, t_stack **b, int i);
void	ft_rrr(t_stack **a, t_stack ***b, int i);
void	ft_free(t_stack **stack);
void	ft_addnums(char **argv, t_stack **a);
int		ft_isaspace(int	c);
int		ft_isasign(int c);
int		ft_isanumber(int c);
int		ft_checkingisvalid(char **argv, int i, int j);
int 	ft_ordercheck(t_stack *stacka);
void	ft_resolve(t_stack **stacka);
void	ft_resolvewhenthree(t_stack **stacka);
void	ft_resolvelotofnums(t_stack **a, t_stack **b, int i);

#endif