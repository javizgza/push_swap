/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listing_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:55:20 by jazarago          #+#    #+#             */
/*   Updated: 2024/02/01 14:11:49 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_new_atoi(char	*str)  //for converting elements to numbers//
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while (*str == 9 || *str == 10 || *str == 11 || *str == 12 ||
			*str == 13 || *str == ' ')
			str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isanumber(*str))
			ft_error();
		i = i * 10 + (*str - '0');
	}
	if ((sign * i) >= 2147483647 || (sign * i) <= -2147483648)
		ft_error();
	return (sign * i);
}

t_stack	*ft_way2(char **argv)
{
	t_stack	*a;
	char	**mov;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	mov = ft_split(argv[1], 32);
	while (mov[i])
	{
		j = ft_new_atoi(mov[i]);
		ft_lstadd_back(&a, ft_stack(j));
		i++;
	}
	ft_freetheargs(mov);
	free(mov);
	return (a);
}

t_stack *ft_way(int  argc, char **argv)
{
	t_stack *stacka;
	int     i;
	int     j;

	i = 1;
	stacka = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
		stacka = ft_way2(argv);
	else
	{
		while (i < argc)
		{
			j = ft_new_atoi(argv[i]);
			ft_lstadd_back(&stacka, ft_stack(j));
			i++;
		}
	}
	return (stacka);
}