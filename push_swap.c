/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:09:10 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 15:35:51 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	
	a = ft_way(argc, argv);
	if (!a || ft_duplicatenum(a))
	{
		ft_freethepush(&a);
		ft_error();
	}
	else if (!ft_ordercheck(a))
	{
		if (ft_lstsize(a) <= 5)
			ft_resolve(&a);
		else if (ft_lstsize(a) > 5)
			ft_resolvebignums(&a, &b);
	}
	return (0);
}