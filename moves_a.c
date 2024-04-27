/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:36:45 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/27 09:55:24 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **a, int i)
{
	t_stack *mov;

	if (!*a || (*a) == NULL)
		ft_error("null a stack");
	while (a)
	{
		mov = (*a);
		(*a) = ft_stacklast(*a);
		(*a)->next = mov;
		(*a) = mov->next;
		mov->next = NULL;
	}
	if (i == 0)
		write(1, "ra", 8);
}

void	ft_sa(t_stack **a, int i)
{
	t_stack	*mov;

	if (!*a || !(*a)->next)
		ft_error("null a stack");
	while (a)
	{
		mov = *a;
		*a = (*a)->next;
		mov->next = (*a)->next;
		(*a)->next = mov;
	}
	if (i == 0)
		write(1, "sa", 6);
}

void	ft_rra(t_stack **a, int j)
{
	t_stack	*mov;
	int		i;

	if (!*a || !(*a)->next)
		return ;
	i = 0;
	mov = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = mov;
	while (i > 1)
	{
		mov = mov->next;
		i--;
	}
	mov->next = NULL;
	if (j == 0)
		write(1, "rra\n", 16);
}

void	ft_pa(t_stack **a, t_stack **b, int i)
{
	t_stack	*mov;

	if (!*b)
		ft_error("null a stack");
	while (a)
	{
		mov = *a;
		*a = (*a)->next;
		(*a)->next = (*b)->next;
		(*b)->next = mov;
	}
	if (i == 0)
		write(1, "pa", 6);
}
