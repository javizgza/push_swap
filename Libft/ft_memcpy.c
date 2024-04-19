/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:24:57 by jazarago          #+#    #+#             */
/*   Updated: 2023/09/26 13:47:56 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*superdest;
	unsigned char	*supersource;
	size_t			i;

	if (!dest && !src)
		return (0);
	superdest = dest;
	supersource = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*superdest++ = *supersource++;
	return (dest);
}
