/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freethepush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:10:44 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 10:19:45 by javi             ###   ########.fr       */
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