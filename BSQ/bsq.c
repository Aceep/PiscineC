/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:30:01 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/25 21:02:08 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	t_mapd	*md;
	int		max[3];

	max[0] = 0;
	max[1] = 0;
	max[2] = 0;
	(void)ac;
	md = ft_gen_map(av[1]);
	if (md == NULL)
		write(1, "map error\n", 10);
	ft_solve(md, max);
	free(md);
}
