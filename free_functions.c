/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:09:13 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/27 09:50:31 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_args(char **str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_free_stk(t_stack **stk)
{
	t_stack	*path;
	t_stack	*mov;

	path = *stk;
	while (stk)
	{
		mov = path->next;
		free(mov);
		mov = path;
	}
	free(stk);
}