/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:12:26 by jazarago          #+#    #+#             */
/*   Updated: 2024/03/21 14:27:54 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	int		total_size;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	memory = malloc(count * size);
	if (!memory)
		free(memory);
	ft_bzero(memory, size * count);
	return (memory);
	free(memory);
}
