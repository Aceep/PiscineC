/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:14:53 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/16 17:31:45 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fonctions.h"

int     main(int argc, char *argv[])
{
	int	**tab;
	int	i;
	
        if (argc == 2)
        {
                if (ft_check(argv[1]) == 0)
                {
                        write(1, "Error\n", 6);
                        return (0);
                }
                tab = ft_create_map(argv[1]);
		if (ft_backtrack(tab, 0))
			ft_print_tab(tab);
		/*else 
			write(1, "Error\n", 6);*/
		i = 0;
		while (i < 6)
			free(tab[i++]);
		free(tab);
        }
	if (argc != 2)
		write(1, "Error\n", 6);
        return (0);
}
