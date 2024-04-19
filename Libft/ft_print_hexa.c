/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:25:25 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/27 12:32:33 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hexa(unsigned int n, int capital)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_print_hexa(n / 16, capital);
	}
	if (n % 16 < 10)
	{
		i = i + ft_print_char(n % 16 + '0');
	}
	else if (capital)
	{
		i = i + ft_print_char(n % 16 + 'A' - 10);
	}
	else
	{
		i = i + ft_print_char(n % 16 + 'a' - 10);
	}
	return (i);
}
