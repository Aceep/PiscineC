/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:30:01 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/27 20:34:45 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	t_mapd	*md;
	int		max[3];
	int		i;

	if (ac == 1)
		return (ft_stdin(max), 0);
	else
	{
		i = 1;
		while (i < ac)
		{
			max[0] = 0;
			max[1] = 0;
			max[2] = 0;
			md = ft_gen_map(av[i]);
			if (md == NULL)
			{
				write(1, "map error\n", 10);
			}
			else
				ft_solve(md, max);
			i++;
		}
	}
}
