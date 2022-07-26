/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:30:01 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/26 17:33:19 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	t_mapd	*md;
	int		max[3];

	while (ac > 1)
	{
		max[0] = 0;
		max[1] = 0;
		max[2] = 0;
		md = ft_gen_map(av[ac - 1]);
		if (md == NULL)
			write(1, "map error\n", 10);
		else
		{
			ft_solve(md, max);
		}
		ac--;
	}
}
