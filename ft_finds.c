/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finds.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:25 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 10:14:43 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	ft_smallestnumber(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr < i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

int	ft_biggestnumber(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr > i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

int	ft_findnumposition(t_stack *a, int nbr)
{
	int	j;

	j = 0;
	while (a->nbr != nbr)
	{
		j++;
		a = a->next;
	}
	a->position = 0;
	return (j);
}

int	ft_positionnumb(t_stack *b, int getnbr)
{
	int		i;
	t_stack	*mov;

	i = 1;
	if (getnbr > b->nbr && getnbr < ft_lstlast(b)->nbr)
		i = 0;
	else if (getnbr > ft_smallestnumber(b) || getnbr < ft_biggestnumber(b))
		i = ft_findnumposition(b, ft_biggestnumber(b));
	else
	{
		mov = b->next;
		while (b->nbr < getnbr || mov->nbr > getnbr)
		{
			b = b->next;
			mov = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_positionnuma(t_stack *a, int getnbr)
{
	int		i;
	t_stack	*mov;

	i = 1;
	if (getnbr > a->nbr && getnbr < ft_lstlast(a)->nbr)
		i = 0;
	else if (getnbr > ft_smallestnumber(a) || getnbr < ft_biggestnumber(a))
		i = ft_findnumposition(a, ft_biggestnumber(a));
	else
	{
		mov = a->next;
		while (a->nbr < getnbr || mov->nbr > getnbr)
		{
			a = a->next;
			mov = a->next;
			i++;
		}
	}
	return (i);
}