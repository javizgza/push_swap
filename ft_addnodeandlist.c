/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnodeandlist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:31:05 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/11 12:06:51 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_addnums(char **argv, t_stack **a)
{
	int c;
	
	c = 1;
	while (*a)
	{
		int	num;

		num = ft_new_atoi(argv[c]);
		if (num != 0)
		{
			t_stack	*node;

			node = node->next;
			node->next = nbr;
		}
		num++;
	}
	c++;
}