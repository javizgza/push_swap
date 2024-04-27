/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:09:35 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/27 10:44:20 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **stk_a, t_stack **stk_b)
{
	if (stk_a || stk_b)
	{
		if (ft_size_stk_a(*stk_a) == 2)
			ft_sort_two(stk_a);
		if (ft_size_stk_a(*stk_a) == 3)
			ft_sort_three(stk_a);
		if (ft_size_stk_a(*stk_a) > 3)
			ft_big_radix_sort(*stk_a, *stk_b);
	}
}

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	if (argc > 1)
	{
		ft_validargs(argc, argv);
		printf("hola");
		a = ft_parse(argc, argv);
		b = ft_stk_b(a);
		if (!ft_order_check(*a))
			ft_sort(a, b);
		ft_free_stk(a);
		ft_free_stk(b);
	}
	return (0);
}
