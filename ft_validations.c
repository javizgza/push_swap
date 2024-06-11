/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:31:24 by jazarago          #+#    #+#             */
/*   Updated: 2024/06/11 18:04:24 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_validate_argument(char *argument)
{
	int index;
	int valid;

	index = 0;
	valid = 1;
	while (argument[index])
	{
		if ((argument[index] >= 'A' && argument[index] <= 'Z') || (argument[index] >= 'a' && argument[index] <= 'z'))
			return (0);
		if (argument[index] == '-')
			if (!(argument[index + 1] >= '0' && argument[index + 1] <= '9'))
				return (0);
		index++;
	}
	if (!ft_safe_atoi(argument, &valid) && argument[0] != '0' && argument[1] != '0')
		return (0);
	if (!valid)
		return (0);
	return (1);
}
