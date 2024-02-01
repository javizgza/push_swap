/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolvebignums.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:08:47 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 13:54:32 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_finish(t_stack **stacka)
{
	int	sma;
	int	size;

	size = ft_lstsize(*stacka);
	sma = ft_smallestnumber(*stacka);
	if (sma > size / 2)
	{
		while (sma < size)
		{
			ft_rra(stacka, 0);
			sma++;
		}
	}
	else
	{
		while (sma > 0)
		{
			ft_ra(stacka, 0);
			sma--;
		}
	}
}

void	ft_push_mid_to_b(t_stack **stacka, t_stack **stackb)
{
	int	size;
	int	numofp;
	int	i;

	size = ft_lstsize(*stacka);
	numofp = 0;
	i = 0;
	while (size >= 6 && i < size && numofp < size / 2)
	{
		if ((*stacka)->position <= size / 2)
		{
			ft_pb(stacka, stackb, 0);
			numofp++;
		}
		else
			ft_ra(stacka, 0);
			i++;
	}
}

void	ft_resolvebignums(t_stack **stacka, t_stack **stackb)
{
	ft_push_mid_to_b(stacka, stackb);
	ft_resolvewhenfive(stacka);
	while (*stackb)
	{
		ft_getindexpos(stacka, stackb);
		ft_manymoves(stacka, stackb);
		ft_lessmoves(stacka, stackb);
	}
	if (!ft_ordercheck(*stacka))
		ft_finish(stacka);
}