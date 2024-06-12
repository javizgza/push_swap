/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:08:30 by javi              #+#    #+#             */
/*   Updated: 2024/06/12 11:03:38 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_Stack	*ft_add_elements(char **arguments)
{
	t_Stack	*stack;
	char	**elements;
	int		count;
	int		index;

	stack = ft_create_empty_stack();
	if (!stack)
		return (NULL);
	count = ft_count_elements(arguments);
	index = count - 1;
	while (count > 1)
	{
		if (arguments[index][0] != '.')
		{
			elements = ft_split(arguments[index], ' ');
			if (!elements)
				return (NULL);
			if (!ft_load_elements_into_stack(stack, elements))
				return (NULL);
		}
		count--;
		index--;
	}
	return (stack);
}

int	ft_element_count(char **items)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (items[index])
	{
		count++;
		index++;
	}
	return (count);
}

int	ft_load_elements_into_stack(t_Stack *stack, char **items)
{
	int	count;

	count = ft_element_count(items);
	while (count)
	{
		if (!ft_stack_push(stack, ft_atoi(items[count - 1])))
			return (0);
		free(items[count - 1]);
		count--;
	}
	free(items);
	return (1);
}

int	ft_validate_arguments(char *argument)
{
	char	**segments;

	segments = ft_split(argument, ' ');
	if (!segments)
		return (0);
	if (!segments[0])
	{
		free(segments);
		return (0);
	}
	return (ft_validate_segments(segments));
}

int	ft_validate_segments(char **segments)
{
	int	index;
	int	error_count;

	index = 0;
	error_count = 0;
	while (segments[index])
	{
		if (!ft_validate_argument(segments[index]))
			error_count++;
		free(segments[index]);
		index++;
	}
	free(segments);
	if (error_count == 0)
		return (1);
	return (0);
}
