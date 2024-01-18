/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movesb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:09:23 by javi              #+#    #+#             */
/*   Updated: 2024/01/12 09:48:40 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack **b, int i)
{
	t_stack *mov;

	if (!*b || !*b->next)
		ft_error();
	while (b)
	{
		mov = *b;
		*b = ft_lstlast(b);
		*b->next = mov;
		*b = mov->next;
		mov->next = NULL;
	}
	if (i == 0)
		write (1, "rotate b", 8);
}

void	ft_sb(t_stack **b, int i)
{
	t_stack *mov;

	if (!*b || !*b->next)
		ft_error();
	while (b)
	{

	}
	if (i = 0)
		write(1, "swap b", 6)
}

void	ft_rrb(t_stack **b, int i)
{
	t_stack	*mov;

	if (!*b || !*b->next)
		ft_error();
	while (*b)
	{
		mov = *b;
		b = ft_lstlast(*b);
		*b->prev = mov;
		*b = *mov->prev;
		*mov->prev = NULL;
	}
	if (i == 0)
		write(1, "reverse rotate b", 16);
}

void	ft_pb(t_stack **a, t_stack **b, int i)
{
	t_stack	*mov;

	if (!b)
		ft_error();
	while (*b)
	{
		mov = *b;
		*b = *b->next;
		*b->next = *a->next;
		*a->next = mov;
	}
	if (i == 0)
		write(1, "push b", 6);
}