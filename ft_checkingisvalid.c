/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkingisvalid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:04:57 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/31 19:16:29 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>   //function to check if aargs are valid//

int	ft_isaspace(int	c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_isasign(int c)
{
	if (c == '+' || c == '-')
		return (c);
	return (0);
}

int	ft_isanumber(int	c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}

int	ft_checkingisvalid(char **argv, int i, int j)
{
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_isasign(argv[i][j]))
			{
				j++;
				if (!ft_isanumber(argv[i][j]))
					return (0);
			}
			else if (ft_isanumber(argv[i][j]))
			{
				j++;
				if (argv[i][j] == '\0')
					return (0);
				else if (!ft_isanumber(argv[i][j]) && !ft_isaspace(argv[i][j]))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
