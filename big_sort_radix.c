/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_radix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:39:18 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/27 09:46:21 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_max_num_bytes(t_stack *stk) 
{
    if (stk == NULL) 
	{
        return (0);
    }
    long max_value;
    t_stack *current;
	
	max_value = stk->number;
	current = stk->next;
    while (current != NULL) 
	{
        if (current->number > max_value) 
		{
            max_value = current->number;
        }
        current = current->next;
    }
	return (0);
}

int	ft_bit_placement(int number, int i)
{
	return ((number >> i) & 1);
}

void ft_big_radix_sort(t_stack *a, t_stack *b) 
{
    int counter[2];
    int size = a->size;  // Asumiendo que 'size' es un campo válido que tienes definido.
    int digits = ft_max_num_bytes(a);  // Cambiamos el nombre para que sea más claro
    int sorted = 1;

    counter[0] = 0;
    while (counter[0] < digits && sorted) 
	{
        counter[1] = 0;
        while (counter[1] < size) 
		{
            if ((a->number >> counter[0]) & 1)  // Accede directamente al número y aplica el desplazamiento
                ft_ra(&a, 0);
            else
                ft_pb(&b, &a, 0);
            counter[1]++;
        }
        while (b->size > 0)
            ft_pa(&a, &b, 0);
        sorted = ft_order_check(a);
        counter[0]++;
    }
}
