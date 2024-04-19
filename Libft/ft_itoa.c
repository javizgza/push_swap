/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:22:15 by jazarago          #+#    #+#             */
/*   Updated: 2023/10/16 16:29:36 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_fillstr(char *str, int n, int len, int sign)
{
	int	i;
	int	remainder;

	i = len - 1;
	str[len + sign] = '\0';
	while (i >= 0)
	{
		remainder = n % 10;
		str[i + sign] = remainder + '0';
		n /= 10;
		i--;
	}
	if (sign)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	len = ft_intlen(n);
	str = malloc(len + sign + 1);
	if (!str)
		return (NULL);
	ft_fillstr(str, n, len, sign);
	return (str);
}
