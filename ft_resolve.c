/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:45:26 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/18 15:47:42 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_resolvelotofnums(t_stack **a, t_stack **b, int i)
{
	
}

void	ft_resolvewhenfour(t_stack **a, int i)
{
	if (!ft_ordercheck(*stacka))
	{
		
	}
}

void	ft_resolvewhenthree(t_stack **stacka)
{
	if (ft_smallestnumber(*stacka) == *(stacka)->nbr)
	{
		ft_rra(*stacka);
		ft_sa(*stacka);
	}
	else if (ft_biggestnumber(*stacka) == *(stacka)->nbr)
	{
		ft_ra(*stacka);
			if (!ft_ordercheck(*stacka))
				ft_sa(*stacka);
	}
	else if (ft_smallestnumber(*stacka) != *(stacka)->nbr
			&& ft_biggestnumber(*stacka) != *(stacka)->nbr)
	{
		ft_rra(*stacka);
			if (!ft_ordercheck(*stacka))
			{
				ft_rra(*stacka);
				ft_sa(*stacka);
				ft_ra(*stacka);
			}
	}
}

void	ft_resolve(t_stack **stacka)
{
	t_stack *stackb;
	int i;
	
	stackb = NULL;
	while (ft_lstsize(*stacka) == 2)
	{
		if (!ft_ordercheck(*stacka))
			ft_sa(*stacka);
	}
	while (ft_lstsize(*stacka) == 3)
	{
		if (!ft_ordercheck(*stacka))
			ft_resolvewhenthree(*stacka);
	}
	while (ft_lstsize(*stacka) == 4)
	{
		if (!ft_ordercheck(*stacka))
			ft_resolvewhenfour(*stacka);
	}
}
