/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:26:19 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/25 20:50:52 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	**ft_init_map(int length, int width)
{
	int	**map;
	int	i;

	i = 0;
	map = (int **)malloc(sizeof(int *) * length + 1);
	while (i < length)
	{
		map[i++] = (int *)malloc(sizeof(int) * width);
	}
	return (map);
}

void	ft_fill_map(t_mapd *md, char *map_data)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	while (map_data[i] != '\n')
		i++;
	x = 0;
	md->map = ft_init_map(md->length, md->width);
	while (x < md->length)
	{
		i++;
		y = 0;
		while (y < md->width)
		{
			if (map_data[i] == md->sym[0])
				md->map[x][y] = 0;
			if (map_data[i] == md->sym[1])
				md->map[x][y] = 1;
			i++;
			y++;
		}
		x++;
	}
	md->map[x] = NULL;
}
