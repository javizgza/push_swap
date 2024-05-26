/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:31:24 by jazarago          #+#    #+#             */
/*   Updated: 2024/05/26 13:03:47 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_validargs(int argc, char **argv)
{
    int		i;
    long	content;
    char	**nums;
    
    if (argc == 1)
        return 0;

    if (argc == 2)
        nums = ft_split(argv[1], ' ');
    else
        nums = argv + 1;
    i = 0;
    while (nums[i])
    {
        content = ft_atoi(nums[i]);
        if (!ft_notnumber(nums[i]) || content < -2147483648 || content > 2147483647)
		{
			i++;
            ft_error("Error");
		}
		i++;
    }

    if (argc == 2)
        ft_free_args(nums);
    return 1;
}

int	ft_notnumber(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
