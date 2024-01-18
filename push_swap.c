/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:09:10 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/12 09:40:59 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

int	main(int argc, char **argv)
{
	t_stack	*a;
	
	a = ft_way(argc, argv);
	if (!a || !ft_duplicatenum(argc, argv))
	{
		ft_error();
		ft_freethepush(a);
	}
	else if (!ft_ordercheck(a))
	{
		ft_resolve();
	}
	return (0);
}