/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listing_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:55:20 by jazarago          #+#    #+#             */
/*   Updated: 2023/12/18 18:21:45 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_new_atoi(char	*str)  //for converting elements to numbers//
{
	int	sign;
	int	i;
	
	sign = 1;
	i = 0;
	while (str* == 9 || str* == 10 || str* == 11 || str* == 12 || str* == 13
			str* == 32)
			str++;
	if (str* == '-')
		sign = -1;
		str++;
	if (str* == '+')
		str++;
	while (str*)
	{
		if (!str >= 0 || !str <= 9)
			ft_error();
		i = i * 10 + (str* - '0');
		str++;
	}
	if ((sign * i) > 2147483647 || (sign * i) < -2147483648)
		ft_error();
	return (sign * i);
}

void	ft_onlytwoelements(int *a, int *b)    //this function only makes the swap of 2args//									a swap if there are only 2 elements//
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

t_stack ft_way(int  argc, char **argv)
{
	t_stack *a;
	int     i;
	int     j;
	int		num;

	a = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2);
		a = ft_onlytwoelements();
	num = 0;
	i = 1;
	else
		while (i < argc)
			num = ft_new_atoi(argv[i])
			i++;
	return (a);
}