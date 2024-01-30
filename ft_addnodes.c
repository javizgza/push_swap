/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:25:18 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/30 10:30:01 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	ft_addnodes(t_stack **stack, t_stack **new)
{
	if (!stack)
		ft_error();
	if (!*stack)
		*stack = new;
	else
		ft_lstlast(*stack)->next = new;
}