/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movesb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:09:23 by javi              #+#    #+#             */
/*   Updated: 2024/01/04 11:01:03 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rb(t_stack **b, int i)
{
	t_stack *mov;

	if (!*b || !*b->next)
		ft_error();
	while (b)
	{
		mov = *b;
		*b = ft_lstlast(b);
		*b->next = mov;
		*b = mov->next;
		mov->next = NULL;
	}
	if (i == 0)
		write (1, "rotate b", 8);
}

void ft_sb(t_stack **b, int i)
{
	t_stack *mov;

	if (!*b || !*b->next)
		ft_error();
	while (b)
	{

	}
	if (i = 0)
		write(1, "swap b", 6)
}