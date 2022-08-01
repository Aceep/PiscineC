/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceep <aceep@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:12:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/08/01 11:51:25 by aceep            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int ac, char **av)
{
	if (!ft_check_argument(ac, av[1]))
		return (0);
	if (ac == 2)
		ft_dico("numbers.dict", av[1]);
	if (ac == 3)
		ft_dico("numbers.dict", av[1], av[2]);
	return (0);
}
