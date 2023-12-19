/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkingtheargs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:57:17 by jazarago          #+#    #+#             */
/*   Updated: 2023/12/19 15:56:16 by jazarago         ###   ########.fr       */
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
	
}