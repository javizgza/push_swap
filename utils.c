/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:39:28 by jazarago          #+#    #+#             */
/*   Updated: 2024/05/27 16:18:57 by jazarago         ###   ########.fr       */
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

    stk = (t_stack **)ft_calloc((large + 1), sizeof(t_stack *));
    if (!stk)
        ft_error("Null stk");

   while (i < large)
{		
    stk_newnode = (t_stack *)ft_calloc(1, sizeof(t_stack));
    if (!stk_newnode)
    {
        free(stk);
        ft_error("Failed to allocate memory for new node");
    }

    // Assuming argv[i] contains the number you want to add to the stack
    stk_newnode->number = atoi(argv[i]); // Convert string to integer

    // Add the new node to the stack
    stk[i] = stk_newnode;

    i++;
}

    return stk;
}

int ft_order_check(t_stack *stka)
{
    if (!stka)
        return 0;  // stka is NULL, return an error code or handle this case appropriately

    while (stka->next)
    {
        if (stka->next->number < stka->number)
            return (0);
        stka = stka->next;
    }
    return (1);
}

t_stack *ft_stacklast(t_stack *stk)
{
    if (stk == NULL) 
	{
        return NULL;
    }
    while (stk->next != NULL) 
	{
        stk = stk->next;
    }
    return (stk);
}
