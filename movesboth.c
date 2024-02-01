/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movesboth.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:07:49 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 14:31:13 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	ft_rr(t_stack **a, t_stack **b, int i)
{
	t_stack *mov;

	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		ft_error();
	mov = *a;
	*a = ft_lstlast(*a);
	(*a)->next = mov;
	*a = mov->next;
	mov->next = NULL;
	mov = *b;
	*b = ft_lstlast(*b);
	(*b)->next = mov;
	*b = mov->next;
	mov->next = NULL;
	if (i == 0)
		write(1, "rotate both", 11);
}

void	ft_ss(t_stack **a, t_stack **b, int i)
{
	t_stack	*mov;

	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		ft_error();
	mov = *a;
	*a = (*a)->next;
	mov->next = (*a)->next;
	(*a)->next = mov;
	mov = *b;
	*b = (*b)->next;
	mov->next = (*b)->next;
	(*b)->next = mov;
	if (i == 0)
		write(1, "swap both", 9);
}

void	ft_rrr(t_stack **a, t_stack **b, int i)
{
	t_stack	*mov;
	
	if ((!*a || !(*a)->next) || (!*b || !(*b)->next))
		ft_error();
	mov = *a;
	*a = ft_lstlast(*a);
	(*a)->prev = mov;
	*a = mov->prev;
	mov->prev = NULL;
	mov = *b;
	*b = ft_lstlast(*b);
	(*b)->prev = mov;
	*b = mov->prev,
	mov->prev = NULL;
	if (i == 0)
		write(1, "reverse rotate both",  19);
}
