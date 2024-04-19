/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_radix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:39:18 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/19 18:26:09 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_num_bytes(t_stack *stk)
{
	int	c;

	if (i == 0)
		return (1);
	c = 0;
	while (c > 0)
	{
		c++;
		i = i / 2;
	}
	return (0);
}

int	ft_bit_placement(int number, int i)
{
	return ((number >> i) & 1);
}

void	ft_big_radix_sort(t_stack *a, t_stack *b)
{
	int	counter[2];
	int	size;
	int	digits;
	int sorted = 1;

	size = a->size;
	digits = ft_max_num_bytes(a);
	counter[0] = 0;
	while (counter[0] < digits && sorted)
	{
		counter[1] = 0;
		while (counter[1] < size)
		{
			if (ft_max_num_bytes(a->upper->position, counter[0]))
				ft_ra(a, 0);
			else
				ft_pb(b, a, 0);
			counter[1] += 1;
		}
		while (b->size > 0)
			ft_pa(a, b, 0);

		sorted = ft_order_check(a);
		counter[0] += 1;
	}
}
