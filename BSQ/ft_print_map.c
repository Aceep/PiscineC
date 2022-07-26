/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:34:45 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/26 17:44:43 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_fill_x(t_mapd *md, int *max)
{
	int	x;
	int	y;

	x = max[0];
	while (x < max[0] + max[2])
	{
		y = max[1];
		while (y < max[1] + max[2])
		{
			md->map[x][y] = 2;
			y ++;
		}
		x ++;
	}
}

void	ft_print_map(t_mapd *md)
{
	int	x;
	int	y;

	x = 0;
	while (x < md->length)
	{
		y = 0;
		while (y < md->width)
		{
			ft_putchar(md->sym[md->map[x][y]]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
