/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:59:24 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/18 17:16:45 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int tab)
{
	char	c;

	c = tab + '0';
	write(1, &c, 1);
}

void	ft_display_soluce(int *tab, int column, int *nb_soluce)
{
	column = 0;
	while (column < 10)
	{
		ft_putchar(tab[column]);
		column = column + 1;
	}
	write(1, "\n", 1);
	*nb_soluce = *nb_soluce + 1;
}

int		ft_position_is_valid(int *tab, int column, int queen_case)
{
	int		i;

	i = 0;
	while (i < column)
	{
		if (tab[i] == queen_case )
				return (0);
		i ++;
	}
	i = 0;
	while (i < column)
	{

		if (tab[i] - i == queen_case - column || tab[i] + i == queen_case + column)
				return (0);
		i ++;
	}
	return (1);
}

void	ft_find_soluce(int *tab, int column, int *nb_soluce)
{
	if (column == 10)
	{
			ft_display_soluce(tab, column, &(*nb_soluce));
			return ;
	}
	tab[column] = 0;
	while (tab[column] < 10)
	{
		if (ft_position_is_valid(tab, column, tab[column]))
				ft_find_soluce(tab, column + 1, &(*nb_soluce));
		tab[column]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int		tab[10];
	int		nb_soluce;

	nb_soluce = 0;
	ft_find_soluce(tab, 0, &nb_soluce);
	return (nb_soluce);
}
int	main(void)
{
	int 	max;

	max = ft_ten_queens_puzzle();
	printf("%d", max);
}
