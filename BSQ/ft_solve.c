/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:29:38 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/25 18:23:53 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	sum(int x, int y, int size, t_mapd *map)
{
	int	j;
	int sum;

	sum = 0;
	j = 0;
	while (j < size)
	{
		if (map->map[x + j][y + size] != 0 || map->map[x + size][y + j] != 0)
			sum ++;
		j ++;
	}
	return (sum);
}

void 	*ft_solve(t_mapd *map, int *max)
{
	int	x;
	int	y;
	int size;

	x = 0;
	size = -1;
	while (x < map->lenght)
	{
		y = 0;
		while (y < map->width)
		{
			while (++size < map->lenght && size < map->width && (sum(x, y, size, map) == 0))	
			{
				if (size > max[2])
					max = x, y, size;
			}
			y ++;
		}
		x ++;
	}
	ft_print_map(map, max);
}