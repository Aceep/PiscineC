/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:29:17 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/25 13:08:52 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_print_map(t_mapd *md, int max)
{
	int	x;
	int	y;

	y = 0;
	while (y < md->width)
	{
				x = 0;
				while ( x < md->lenght)
				{
					ft_putchar(md->sym[md->map[x][y]]);
					x ++;	
				}
				ft_putchar('\n');
				y ++;
	}
}