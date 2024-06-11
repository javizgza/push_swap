/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:09:35 by jazarago          #+#    #+#             */
/*   Updated: 2024/06/11 18:02:36 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_leaks(void)
{
	system("leaks -q a.out");
}

int ft_start(int arg_count, char **arg_values)
{
    char **args_aux;

    if (arg_count > 1)
    {
        args_aux = arg_values;
        args_aux++;
        while (*args_aux)
        {
            if (!ft_validate_arguments(*args_aux))
            {
                write(1, "Error\n", 6);
                return (0);
            }
            args_aux++;
        }
        return (ft_execute(arg_values));
    }
    write(1, "Error\n", 6);
    return (0);
}

int ft_execute(char **arguments)
{
	t_Stack *stack_a;
	t_Stack *stack_b;

	stack_a = ft_add_elements(arguments);
	stack_b = ft_create_empty_stack();
	if (!stack_a || !stack_b)
		return (0);
	if (!ft_check_duplicates(stack_a))
	{
		write(1, "Error\n", 6);
		ft_destroy_stack(stack_a);
		ft_destroy_stack(stack_b);
		return (0);
	}
	ft_assign_positions(stack_a);
	ft_perform_sort(stack_a, stack_b);
	ft_destroy_stack(stack_a);
	ft_destroy_stack(stack_b);
	return (0);
}
