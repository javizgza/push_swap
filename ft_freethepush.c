/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freethepush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:10:44 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/30 11:17:30 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_freethepush(t_stack **stack)
{
	t_stack *mov;

	if (!*mov)
		ft_error();
	while (*stack)
	{
		mov = *stack;
		*stack = *stack->next;
		*stack = *stack->nbr;
		free(*stack);
		*stack = mov;
	}
}