/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:08:13 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/25 20:40:15 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoil(char *str, int *nb)
{
	int				i;
	int				sign;

	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		*nb = *nb * 10 + str[i] - '0';
		i++;
	}
	*nb = sign * *nb;
	return (i);
}

int	ft_first_line(t_mapd *md, char *map_data)
{
	int	i;
	int	size;
	int	nb_len;

	size = 0;
	nb_len = ft_atoil(map_data, &size);
	if (size <= 0)
		return (0);
	md->length = size;
	i = 0;
	while (map_data[i + nb_len] != '\n')
		i++;
	if (i != 3)
		return (0);
	md->sym[0] = map_data[nb_len];
	md->sym[1] = map_data[nb_len + 1];
	md->sym[2] = map_data[nb_len + 2];
	return (1);
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
	while (map_data[i++] != '\n')
		width++;
	return (width);
}

int	ft_is_valid(char *sym, char c)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (sym[i++] == c)
			return (1);
	}
	return (0);
}

int	ft_map_lines(t_mapd *md, char *map_data)
{
	int	i;
	int	map_w;
	int	line_w;

	i = 0;
	map_w = ft_width(map_data);
	if (map_w == 0)
		return (0);
	while (map_data[i] != '\n')
		i++;
	while (map_data[i] != '\0')
	{
		i++;
		line_w = 0;
		while (map_data[i] != '\n' && map_data[i] != '\0')
		{
			if (ft_is_valid(md->sym, map_data[i++]))
				line_w++;
			else
				return (0);
		}
		if (line_w != map_w)
			return (0);
	}
	return (md->width = map_w, 1);
}
