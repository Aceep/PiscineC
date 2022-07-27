/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:29:38 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/27 21:00:38 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	sum(int x, int y, int size, t_mapd *map)
{
	int	j;
	int	sum;

	sum = 0;
	j = 0;
	while (j < size)
	{
		if (map->map[x + j][y + size - 1] != 0
			|| map->map[x + size - 1][y + j] != 0)
			sum ++;
		j ++;
	}
	return (sum);
}

void	ft_free(t_mapd *md)
{
	int	x;

	x = -1;
	if (md->map != NULL)
	{
		while (++ x <= md->length)
			free(md->map[x]);
	}
	free(md->map);
	free(md->sym);
	free(md);
}

int	ft_solve(t_mapd *map, int *max)
{
	int	x;
	int	y;
	int	s;

	x = -1;
	s = 0;
	while (++x < map->length)
	{
		y = -1;
		while (++y < map->width)
		{
			while (x + ++s <= map->length && y + s <= map->width
				&& (sum(x, y, s, map) == 0))
			{
				if (s > max[2])
				{
					max[0] = x;
					max[1] = y;
					max[2] = s;
				}
			}
			s = 0;
		}
	}
	return (ft_fill_x(map, max), ft_print_map(map), ft_free(map), 0);
}
