/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:44:22 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/16 19:18:30 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack **b, int i)
{
	t_stack *mov;

	if (!*b || !(*b)->next)
		ft_error("null b stack");
	while (b)
	{
		mov = *b;
		*b = ft_lstlast(*b);
		(*b)->next = mov;
		*b = mov->next;
		mov->next = NULL;
	}
	if (i == 0)
		write (1, "rb", 8);
}

void	ft_sb(t_stack **b, int i)
{
	t_stack *mov;

	if (!*b || !(*b)->next)
		ft_error("null b stack");
	while (b)
	{
		mov = *b;
		*b =(*b)->next;
		mov->next = (*b)->next;
		(*b)->next = mov;
	}
	if (i == 0)
		write(1, "sb", 6);
}

void	ft_rrb(t_stack **b, int j)
{
	t_stack	*mov;
	int		i;

	if (!*b || !(*b)->next)
		return ;
	i = 0;
	mov = *b;
	while ((*b)->next)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = mov;
	while (i > 1)
	{
		mov = mov->next;
		i--;
	}
	mov->next = NULL;
	if (j == 0)
		write(1, "rrb\n", 16);
}

void	ft_pb(t_stack **a, t_stack **b, int i)
{
	t_stack	*mov;

	if (!b)
		ft_error("null b stack");
	while (*b)
	{
		mov = *b;
		*b = (*b)->next;
		(*b)->next = (*a)->next;
		(*a)->next = mov;
	}
	if (i == 0)
		write(1, "pb", 6);
}
