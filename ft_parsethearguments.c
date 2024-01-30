/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsethearguments.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:20:50 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/27 18:42:17 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_addargs(char **argv, t_stack **stacka)
{
	long	i;

	i = 1;
	while (argv[i] != NULL)
	{
		ft_lstadd_back(stacka, ft_newstack(ft_atoi(argv[i])));
		i++;
	}
}

t_stack	ft_quoted(char	**argv)
{
	t_stack	*stacka;
	char	**mov;
	int		i;
	int		j;

	stack_a = NULL;
	i = 0;
	mov = ft_split(argv[1], 32);
	list_args(mov, &stacka);
	ft_freestr(mov);
	free(mov);
	return (stacka);
}

t_stack	*ft_parsethearguments(int argc, char **argv)
{
	t_stack	*stacka;
	int		i;
	int		j;

	i = 1;
	stacka = NULL;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		stacka = ft_quoted(argv);
	else
		ft_addargs(argv, &stacka);
	return (stacka);
}