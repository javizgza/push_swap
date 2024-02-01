/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getindexpos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:03:21 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 10:22:32 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	ft_expectedposition(t_stack **stacka, int in, int expec, int goal)
{
	t_stack	*mov;
	
	mov = *stacka;
	while (mov)
	{
		if (mov->position > in && mov->position < expec)
		{
			expec = mov->position;
			goal = mov->index;
		}
		mov = mov->next;
	}
	if (expec != INT_MAX)
		return (goal);
	mov = *stacka;
	while (mov)
	{
		if (mov->position < goal)
		{
			expec = mov->position;
			goal = mov->index;
		}
		mov = mov->next;
	}
	return (goal);
}

void	ft_getindex(t_stack **s)
{
	t_stack	*mov;
	int		i;
	
	mov = *s;
	i = 0;
	while (mov)
	{
		mov->index = i;
		mov = mov->next;
		i++;
	}
}

void	ft_getindexpos(t_stack **stacka, t_stack **stackb)
{
	t_stack	*mov;
	int	position;

	mov = *stackb;
	ft_getindex(stacka);
	ft_getindex(stackb);
	position = 0;
	while (mov)
	{
		position = ft_expectedposition(stacka, mov->position, INT_MAX, position);
		mov->position = position;
		mov = mov->next;
	}
}