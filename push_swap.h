/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:00:42 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/06 10:18:45 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	<stdlib.h>
#include	<limits.h>

typedef struct s_stack
{
	int				nbr;
	int				exp;
	long			position;
	long			index;
	long			manya;
	long			manyb;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void    ft_error(void);
int		ft_new_atoi(char	*str);
t_stack	*ft_way2(char **argv);
t_stack	*ft_way(int  argc, char **argv);
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
void	ft_rrr(t_stack **a, t_stack **b, int i);
void	ft_freethepush(t_stack **stack);
int		ft_isaspace(int	c);
int		ft_isasign(int c);
int		ft_isanumber(int c);
int		ft_checkingisvalid(char **argv, int i, int j);
int 	ft_ordercheck(t_stack *stacka);
void	ft_resolve(t_stack **stacka);
void	ft_resolvewhenthree(t_stack **stacka);
void	ft_resolvelotofnums(t_stack **a, t_stack **b);
void	ft_fourbiggerthanfive(t_stack **stacka);
void	ft_algforfive(t_stack **stacka);
void	ft_algforfour(t_stack **stacka);
int		ft_isalpha(int c);
void	alpha_checkings(char **argv);
int 	ft_checkingtheargs(char **argv);
int		ft_smallestnumber(t_stack *a);
int		ft_biggestnumber(t_stack *a);
void	ft_getindexpos(t_stack **stacka, t_stack **stackb);
void	ft_getindex(t_stack **s);
int		ft_expectedposition(t_stack **stacka, int in, int expec, int goal);
void	ft_lessmoves(t_stack **a, t_stack **b);
int		absolute(int i);
void	ft_manymoves(t_stack **stacka, t_stack **stackb);
t_stack	*ft_stack(int stack);
int ft_ordercheck(t_stack *stacka);
void	ft_addargs(char **argv, t_stack **stacka);
t_stack	*ft_quoted(char	**argv);
t_stack	*ft_parsethearguments(int argc, char **argv);
void	ft_resolvewhenfive(t_stack **a);
void	ft_resolvewhenfour(t_stack **a);
void	ft_resolvewhenthree(t_stack **stacka);
void	ft_resolvebignums(t_stack **stacka, t_stack **stackb);
void	ft_push_mid_to_b(t_stack **stacka, t_stack **stackb);
void	ft_finish(t_stack **stacka);
void	rotate_b(t_stack **b, int *many);
void	rotate_a(t_stack **a, int *many);
void	rotate_both(t_stack **a, t_stack **b, int *manya, int *manyb);
void	reverse_both(t_stack **a, t_stack **b, int *manya, int *manyb);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *stack);
void	ft_whichmoves(t_stack **stacka, t_stack **stackb, int manya, int manyb);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_atoi(const char *str);
void	list_args(char **argv, t_stack **stack_a);
char	**ft_split(char const *s, char c);
void	ft_freetheargs(char **argv);

#endif