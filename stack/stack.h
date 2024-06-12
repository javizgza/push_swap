/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:39:30 by javi              #+#    #+#             */
/*   Updated: 2024/06/12 11:05:13 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct node
{
	int			value;
	int			pos;
	struct node	*next;
}	t_Node;

typedef struct stack
{
	t_Node	*top;
	int		size;
}	t_Stack;

t_Node	*ft_new_node(int value, int pos);
void	ft_remove_node(t_Node *node);
t_Stack	*ft_create_empty_stack(void);
void	ft_destroy_stack(t_Stack *stack);
int		ft_stack_push(t_Stack *stack, int value);
void	ft_pop(t_Stack *stack);

#endif
