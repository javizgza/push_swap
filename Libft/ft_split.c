/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:13:48 by javi              #+#    #+#             */
/*   Updated: 2023/10/17 12:19:25 by jazarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*ft_free(char **str, int j)
{
	while (j--)
		free(str[j]);
	free(str);
	return (NULL);
}

static char	**ft_fill(char const *s, char c, char **str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			str[j] = malloc(sizeof(char) * (ft_word_len(&s[i], c) + 1));
			if (!str[j])
				ft_free(str, j);
			while (s[i] != c && s[i])
				str[j][k++] = s[i++];
			str[j++][k] = '\0';
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!str)
		return (NULL);
	return (ft_fill(s, c, str));
}
