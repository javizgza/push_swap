/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:00:42 by jazarago          #+#    #+#             */
/*   Updated: 2023/12/18 18:07:07 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	<stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

#include	void    ft_error(void);
#include	int	ft_new_atoi(char	*str);
#include	void	ft_onlytwoelements(int *a, int *b);
#include	t_stack ft_way(int  argc, char **argv);

#endif