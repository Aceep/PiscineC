/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:12:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/23 21:14:49 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int ac, char **av)
{
	char	*num_tab[41];

	if (ac == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init_dico(num_tab, 41);
	if (!ft_check_argument(ac, av[1]))
		return (0);
	//Debut des tests de read dico 
	if (ac == 2)
		ft_dico(num_tab, av[1], "numbers.dict");
	else if (ac == 3)
	{
			ft_dico(num_tab, av[2], av[1]);
	}
	free_dict(num_tab, 41);
	return (0);	
}