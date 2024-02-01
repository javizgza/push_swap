/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_times.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:46:11 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 15:13:34 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	reverse_both(t_stack **a, t_stack **b, int *manya, int *manyb)
{
	while (*manya < 0 && *manyb < 0)
	{
		(*manya)++;
		(*manyb)++;
		ft_rrr(a, b, 0);
	}
}

void	rotate_both(t_stack **a, t_stack **b, int *manya, int *manyb)
{
	while (*manya > 0 && *manyb > 0)
	{
		(*manya)--;
		(*manyb)--;
		ft_rr(a, b, 0);
	}
}

void	rotate_a(t_stack **a, int *many)
{
	while (*many)
	{
		if (*many > 0)
		{
			ft_ra(a, 0);
			(*many)--;
		}
		else if (*many < 0)
		{
			ft_rra(a, 0);
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
			ft_rb(b, 0);
			(*many)--;
		}
		else if (*many < 0)
		{
			ft_rrb(b, 0);
			(*many)++;
		}
	}
}

void	ft_whichmoves(t_stack **stacka, t_stack **stackb, int manya, int manyb)
{
	if (manya < 0 && manyb < 0)
		ft_rrr(stacka, stackb, 0);
	else if (manya > 0 && manyb > 0)
		ft_rr(stacka, stackb, 0);
	ft_ra(stacka, manya);
	ft_rb(stackb, manyb);
	ft_pa(stacka, stackb, manya);
}