/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:31:24 by jazarago          #+#    #+#             */
/*   Updated: 2024/07/09 14:33:28 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_validate_argument(char *argument)
{
	int	index;
	int	valid;

	index = 0;
	valid = 1;
	if (argument[index] == '-')
			index++;
	while (argument[index])
	{
		if (argument[index] < '0' || argument[index] > '9')
			return (0);
		index++;
	}
	if (!ft_safe_atoi(argument, &valid) && argument[0] != '0' \
		&& argument[1] != '0')
		return (0);
	if (!valid)
		return (0);
	return (1);
}
