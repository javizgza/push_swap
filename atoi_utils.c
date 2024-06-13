/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:39:28 by jazarago          #+#    #+#             */
/*   Updated: 2024/06/13 09:26:44 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_space(char c)
{
	if (c == '\n')
		return (1);
	else if (c == '\t')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	else if (c == ' ')
		return (1);
	return (0);
}

long	ft_parse_number(const char *str, long value, int *sign)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (ft_is_space(str[index]) == 0)
			break ;
		index++;
	}
	if (str[index] == '-')
	{
		*sign *= -1;
		index++;
	}
	else if (str[index] == '+')
		index++;
	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= '9')
			value = (str[index] - '0') + (value * 10);
		else
			break ;
		index++;
	}
	return (value);
}

int	ft_safe_atoi(const char *str, int *valid)
{
	long	value;
	int		sign;

	value = 0;
	sign = 1;
	value = ft_parse_number(str, value, &sign);
	if (value > ((long)INT_MAX + 1) && sign == -1)
	{
		printf("Error\n");
		*valid = 0;
	}
	if (value > INT_MAX && sign == 1)
	{
		*valid = 0;
	}
	return (value * sign);
}
