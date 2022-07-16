/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:14:53 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/16 15:28:39 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *str);
int	**ft_create_map(void);
void	ft_print_tab(int **tab);
void	ft_putchar(char c);

int     main(int argc, char *argv[])
{
	int **tab;
	
        if (argc == 2)
        {
                if (ft_check(argv[1]) == 0)
                {
                        write(1, "Error", 5);
                        return (0);
                }
                tab = ft_create_map();
		ft_print_tab(tab);
        }
        return (0);
}

