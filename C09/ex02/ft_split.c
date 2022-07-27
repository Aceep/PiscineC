/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:21:53 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/27 10:50:27 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_len_final_str(char *str, char *sep)
{
	int		len_final_str;
	char	**tab;
	int		i;

	len_final_str = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_is_sep(str[i], sep)
			&& (ft_is_sep(str[i + 1], sep) || str[i + 1] == 0))
			len_final_str++;
		i++;
	}
	tab = malloc(sizeof(char *) * len_final_str + 1);
	if (!tab)
		return (NULL);
	return (tab);
}

int	ft_get_str(char **tab, char *str, char *sep, int line)
{
	int	size;
	int	i;

	size = 1;
	while (!ft_is_sep(str[size], sep) && str[size])
		size++;
	tab[line] = (char *)malloc(sizeof(char) * size);
	if (tab[line] == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		tab[line][i] = str[i];
		i++;
	}
	tab[line][size] = 0;
	return (size);
}

char	**ft_split(char *str, char *sep)
{
	char	**final_str;
	int		line;
	int		i;

	final_str = ft_len_final_str(str, sep);
	i = 0;
	line = 0;
	while (str[i])
	{
		if (!ft_is_sep(str[i], sep) && str[i])
		{
			i += ft_get_str(final_str, str + i, sep, line);
			line++;
		}
		else
			i++;
	}
	final_str[line] = 0;
	return (final_str);
}
