/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicatenum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:41:36 by javi              #+#    #+#             */
/*   Updated: 2024/01/04 11:01:03 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_duplicatenum(t_stack *a)
{
	t_stack	ckd;

	while (a)
	{
		ckd = ckd->next;
		while (ckd)
		{
			if (ckd->nbr == a->nbr)
				return (1);
			ckd = ckd->next;
		}
		a = a->next;
	}
	return (0);
}
