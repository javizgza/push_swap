/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:22:04 by jazarago          #+#    #+#             */
/*   Updated: 2024/04/16 19:23:54 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**ft_parse(int argc, char **argv)
{
	char	**stk_large;
	int		i;
	int		c;
	t_stack	**stk;
	
	if (argc == 2)
	{
		i = 0;
		stk_large = ft_split(argv[1], " ");
		while (stk_large[c])
			c++;
	}
	else if (argc != 2)
		c = argc;
	stk = ft_complete_stk(argv, c, i);
	return (stk);
}
