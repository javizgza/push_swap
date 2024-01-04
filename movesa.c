/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movesa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:25:07 by javi              #+#    #+#             */
/*   Updated: 2024/01/04 10:59:15 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_stack **a, int i)
{
	t_stack *mov;

	if (!a || a == NULL)
		ft_error();
	while (a)
	{
		mov = *a;
		*a = ft_lstlast(*a);
		*a->next == mov;
		a = mov->next;
		mov->next = NULL;
	}
	if (i == 0)
		write(1, "rotate a", 8);
}

void ft_sa(t_stack **a, int i)
{
	t_stack	*mov;

	if (!a || !*a->next)
		ft_error();
	while (a)
	{
		mov = *a;
		*a = *a->next;
		mov->next = *a->next;
		a->next = mov;
	}
	if (i == 0)
		write(1, "swap a", 6)
}

void ft_rra(t_stack **a, int i)
{
	t_stack	**a;

	if (!*a || !*a->next)
		ft_error();
	while (a)
	{

	}
}

void ft_pa(t_stack **a, t_stack **b, int i)
{
	t_stack	**mov;

	if (!b)
		ft_error();
	while (a)
	{
		mov = *b;
		*a = *b;
		*b = *b->next;
		*a->next = mov;
	}
	if (i == 0)
		write(1, "push a", 6);
}