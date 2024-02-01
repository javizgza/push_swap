/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freethepush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:10:44 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 14:10:18 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_freethepush(t_stack **stack)
{
	t_stack *mov;

	while (*stack)
	{
		mov = *stack;
		*stack = (*stack)->next;
		free(*stack);
	}
}

void	ft_freetheargs(char **argv)
{
	char	*c;

	if (!argv)
		return ;
	while (*argv)
	{
		c = *argv;
		argv++;
		free (c);
	}
	*argv = NULL;
}