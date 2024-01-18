/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:38:19 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/09 16:52:28 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

t_stack	ft_stack(int stack)
{
	t_stack	*newstack;
	
	newstack = malloc(sizeof (t_stack));
	if (!newstack)
		ft_error();
	newstack->nbr = stack;
	newstack->next = NULL;
	return (newstack);
}