/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:13:56 by jazarago          #+#    #+#             */
/*   Updated: 2023/09/26 14:05:30 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*idest;
	unsigned char	*isource;

	if (dst == src || len == 0)
		return (dst);
	idest = (unsigned char *)dst;
	isource = (unsigned char *)src;
	if (idest < isource)
	{
		while (len--)
			*idest++ = *isource++;
	}
	else
	{
		idest = (unsigned char *)dst + (len - 1);
		isource = (unsigned char *)src + (len - 1);
		while (len--)
			*idest-- = *isource--;
	}
	return (dst);
}
