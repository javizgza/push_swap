/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkingtheargs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:57:17 by jazarago          #+#    #+#             */
/*   Updated: 2024/01/04 11:01:03 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 65 || c <= 122)	
		return (c);
	return (0);
}

int	alpha_checkings(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
			if (!ft_isalpha)
				ft_error();
			j++;
		i++;
	}
}

int ft_checkingtheargs(char **argv)
{
	alpha_checkings(argv);
	if (!ft_checkingisvalid)
		return (0);
	return (1);
}