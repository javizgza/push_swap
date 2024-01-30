/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algfourandfive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:47:52 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/30 10:31:50 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_fourbiggerthanfive(t_stack **stacka, int i)
{
	if ((*stacka)->next->next->next->nbr > 
			(*stacka)->next->next->next->next->nbr)
			{
				ft_rra(*stacka, 0);
				ft_rra(*stacka, 0);
				ft_sa(*stacka, 0);
				ft_ra(*stacka, 0);
				ft_ra(*stacka, 0);
			}
}

void	ft_algforfive(t_stack **stacka, int i)
{
	while (*stacka)
	{
		if ((*stacka)->nbr > (*stacka)->next->nbr)
			ft_sa(*stacka);
		if ((*stacka)->next->nbr > (*stacka)->next->next->nbr)
		{
			ft_ra(*stacka, 0);
			ft_sa(*stacka, 0);
			ft_rra(*stacka, 0);
		}
		if ((*stacka)->next->next->nbr > (*stacka)->next->next->next->nbr)
		{
			ft_ra(*stacka, 0);
			ft_ra(*stacka, 0);
			ft_sa(*stacka, 0);
			ft_rra(*stacka, 0);
			ft_rra(*stacka, 0);
		}
		if ((*stacka)->next->next->next->nbr > 
			(*stacka)->next->next->next->next->nbr)
				ft_fourbiggerthanfive(*stacka);
	}
}

void	ft_algforfour(t_stack **stacka, int i)
{
	while (*stacka)
	{
		if ((*stacka)->nbr > (*stacka)->next->nbr)
			ft_sa(*stacka);
		if ((*stacka)->next->nbr > (*stacka)->next->next->nbr)
		{
			ft_ra(*stacka, 0);
			ft_sa(*stacka, 0);
			ft_rra(*stacka, 0);
		}
		if ((*stacka)->next->next->nbr > (*stacka)->next->next->next->nbr)
		{
			ft_ra(*stacka, 0);
			ft_ra(*stacka, 0);
			ft_sa(*stacka, 0);
			ft_rra(*stacka, 0);
			ft_rra(*stacka, 0);
		}
	}
}
