/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:39:28 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/17 16:27:55 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_size_stk_a(t_stack *stk)
{
	int	i;

	i = 0;
	while (stk)
	{
		stk = stk->next;
		i++;
	}
	return (i);
}

t_stack **ft_complete_stk(char **argv, int large, int i)
{
	t_stack **stk;
	t_stack	*stk_newnode;

	stk = (t_stack **)ft_calloc((large), sizeof(t_stack **));
	while (i < large)
	{		
		stk_newnode = (t_stack **)ft_calloc((large), sizeof(t_stack **));
		if (stk_newnode == NULL)
		{
			free(stk_newnode);
			ft_error("Null stk");
		}
		stk_newnode->argvalue = ft_atoi(argv[1]);
	}
	return (stk);
}

int ft_order_check(t_stack *stka)
{
	while (stka->next)
	{
		if (stka->next->number < stka->number)
			return (0);
		stka = stka->next;
	}
	return (1);
}
