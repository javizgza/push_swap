/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manymoves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:02:12 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/29 18:32:21 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_manymoves(t_stack **stacka, t_stack **stackb)
{
	t_stack	*mova;
	t_stack	*movb;
	int		lengtha;
	int		lengthb;

	mova = *stacka;
	movb = *stackb;
	lengtha = ft_lstsize(stacka);
	lengthb = ft_lstsize(*stackb);
	while (movb)
	{
		movb->manyb = movb->index;
		if (movb->index > lengthb / 2)
			movb->manyb = (lengthb - movb->index) * -1;
		movb->manya = movb->goal;
		if (movb->goal > lengtha / 2)
			movb->manya = (lengtha - movb->goal) * -1;
		movb = movb->next;
	}
}

int	absolute(int i)
{
	if (i < 0)
		return (i * -1);
	return (i);
}

void	ft_lessmoves(t_stack **a, t_stack **b)
{
	t_stack	*mov;
	int		lessmoves;
	int		manya;
	int		manyb;

	mov = *stackb;
	lessmoves = INT_MAX;
	while (mov)
	{
		if (absolute(mov->manya) + absolute(mov->manyb) < lessmoves)
		{
			lessmoves = absolute(mov->manya) + absolute(mov->manyb);
			manya = mov->manya;
			manyb = mov->manyb;
		}
		mov = mov->next;
	}
	ft_whichmoves(stacka, stackb, manya, manyb);
}