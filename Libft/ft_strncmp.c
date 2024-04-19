/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:00:49 by jazarago          #+#    #+#             */
/*   Updated: 2023/09/27 13:00:16 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (a1[i] != a2[i] || a1[i] == 0 || a2[i] == 0)
			return (a1[i] - a2[i]);
		i++;
	}
	return (0);
}
