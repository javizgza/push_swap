/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:09:10 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/30 11:16:44 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	
	a = ft_way(argc, argv);
	if (!a || !ft_duplicatenum(a))
	{
		ft_freethepush(&a);
		ft_error();
	}
	else if (!ft_ordercheck(a))
	{
		ft_resolve(&a);
	}
	return (0);
}