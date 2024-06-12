/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:31:04 by javi              #+#    #+#             */
/*   Updated: 2024/06/12 11:01:09 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_count_elements(char **elements)
{
	int	count;

	count = 0;
	while (elements[count] != NULL)
	{
		count++;
	}
	return (count);
}
