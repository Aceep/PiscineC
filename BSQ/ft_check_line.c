/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:08:13 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/27 20:53:13 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoil(char *str, int *nb)
{
	int				i;

	i = 0;
	if (!(str[0] >= '1' && str[0] <= '9'))
		return (0);
	while (str[i + 3] != '\0' && str[i + 3] != '\n'
		&& (str[i] >= '0' && str[i] <= '9') && i < 9)
	{
		*nb = *nb * 10 + str[i] - '0';
		i++;
	}
	if (str[i + 3] != '\n')
		return (*nb = 0, 0);
	return (i);
}

int	ft_width(char *map_data)
{
	int	i;
	int	width;

	i = 0;
	width = 0;
	while (map_data[i] != '\n')
		i++;
	i++;
	while (map_data[i] != '\n' && map_data[i] != '\0')
	{
		i++;
		width++;
	}
	return (width);
}

int	ft_is_valid(char *sym, char c)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (sym[i++] == c)
			return (1);
	}
	return (0);
}
