/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:31:04 by javi              #+#    #+#             */
/*   Updated: 2024/06/11 22:36:33 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_count_elements(char **elements)
{
    int count;

    count = 0;
    while (elements[count] != NULL)
    {
        count++;
    }
    return count;
}

