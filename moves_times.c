/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_times.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:46:11 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/30 12:02:29 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	reverse_both(t_stack **a, t_stack **b, int *manya, int *manyb)
{
	while (*manya < 0 && *manyb < 0)
	{
		(*manya)++;
		(*manyb)++;
		ft_rrr(a, b);
	}
}

void	rotate_both(t_stack **a, t_stack **b, int *manya, int *manyb)
{
	while (*manya > 0 && *manyb > 0)
	{
		(*manya)--;
		(*manyb)--;
		ft_rr(a, b);
	}
}

void	rotate_a(t_stack **a, int *many)
{
	while (*many)
	{
		if (*many > 0)
		{
			ft_ra(a);
			(*many)--;
		}
		else if (*many < 0)
		{
			ft_rra(a);
			(*many)++;
		}
	}
}

void	rotate_b(t_stack **b, int *many)
{
	while (*many)
	{
		if (*many > 0)
		{
			do_rb(b);
			(*many)--;
		}
		else if (*many < 0)
		{
			ft_rrb(b);
			(*many)++;
		}
	}
}

void	ft_whichmoves(t_stack **stacka, t_stack **stackb, int manya, int manyb)
{
	if (manya < 0 && manyb < 0)
		ft_rrr(stacka, stackb, &manya, &manyb);
	else if (manya > 0 && manyb > 0)
		ft_rr(stacka, stackb, &manya, &manyb);
	ft_ra(stacka, &manya);
	ft_rb(stackb, &manyb);
	ft_pa(stacka, stackb, &manya);
}