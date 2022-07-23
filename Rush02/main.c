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
	if (ac == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!ft_check_argument(ac, av[1]))
		return (0);

	ft_parsing_dico(av[1]);
	return (0);	
}