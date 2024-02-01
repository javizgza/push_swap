/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ordercheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:49:33 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 12:50:57 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int ft_ordercheck(t_stack *stacka)
{
	int	i;

	i = stacka->nbr;
	while (stacka)
	{
		if (i > stacka->nbr)
			return (0);
		i = stacka->nbr;
		stacka = stacka->next;
	}
	return (1);
}