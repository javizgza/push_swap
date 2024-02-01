/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:45:26 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 13:51:26 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_resolvewhenfive(t_stack **stacka)
{
	(ft_algforfive(stacka));
}

void	ft_resolvewhenfour(t_stack **stacka)
{
	(ft_algforfour(stacka));
}

void	ft_resolvewhenthree(t_stack **stacka)
{
	if (ft_smallestnumber(*stacka) == (*stacka)->nbr)
	{
		ft_rra(stacka, 0);
		ft_sa(stacka, 0);
	}
	else if (ft_biggestnumber(*stacka) == (*stacka)->nbr)
	{
		ft_ra(stacka, 0);
			if (!ft_ordercheck(*stacka))
				ft_sa(stacka, 0);
	}
	else if (ft_smallestnumber(*stacka) != (*stacka)->nbr
			&& ft_biggestnumber(*stacka) != (*stacka)->nbr)
	{
		ft_rra(stacka, 0);
			if (!ft_ordercheck(*stacka))
			{
				ft_rra(stacka, 0);
				ft_sa(stacka, 0);
				ft_ra(stacka, 0);
			}
	}
}

void	ft_resolve(t_stack **stacka)
{
	t_stack *stackb;
	
	stackb = NULL;
	while (ft_lstsize(*stacka) == 2)
	{
		if (!ft_ordercheck(*stacka))
			ft_sa(stacka, 0);
	}
	while (ft_lstsize(*stacka) == 3)
	{
		if (!ft_ordercheck(*stacka))
			ft_resolvewhenthree(stacka);
	}
	while (ft_lstsize(*stacka) == 4)
	{
		if (!ft_ordercheck(*stacka))
			ft_resolvewhenfour(stacka);
	}
	while (ft_lstsize(*stacka) == 5)
		(ft_resolvewhenfive(stacka));
}
