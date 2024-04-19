/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsignedint.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:26:01 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/27 12:32:46 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsignedint(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i = i + ft_print_unsignedint(n / 10);
	}
	i = i + ft_print_char(n % 10 + '0');
	return (i);
}
