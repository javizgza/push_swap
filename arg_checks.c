/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:31:24 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/19 18:21:18 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_validargs(int argc, char **argv)
{
	int		i;
	long	content;
	char	**nums;
	
	i = 0;
	if (argc == 2)
		nums = ft_split(argv[1], ' ');
	if (argc == 1)
	{
		i = 1;
		nums = argv;
	}
	while (nums[i])
	{
		content = ft_atoi(nums[i]);
		if (!ft_notnumber(nums[i]))
			ft_error("Error");
		if (content < -2147483648 || content > 2147483647)
			ft_error("Error");
		i++;
	}
	if (argc == 2)
		ft_free_args(nums);
	return (0);
}

int	ft_notnumber(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (i != ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
