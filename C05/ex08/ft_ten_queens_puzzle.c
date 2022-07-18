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

int	ft_create_chessboard()
{
	int	**tab;
	int	i;

	tab = malloc(10 * sizeof(int*));
	i = 0;
	while (i < 10)
	{
		tab[i] = malloc(10 * sizeof(int));
		i ++
	}
	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10) 
		{
			tab[i][j] = 0;
			j ++;
		}
		i ++;
		j = 0;
	}
}

int	ft_check(int **tab, int i, int j)
{
	int	n;

	n = 0;
	while (n < 10)
	{
		if (tab[i][n] == 1)
			return (0);
		n ++;
	}
	n = 0;
	while (n < 10)
	{
		if (tab[n][j] == 1)
			return (0);
		n ++;
	}
	n = 1;
	while (n + i < 10)
	{
		if (tab [i + n][j + n] ==			
	return (1);
}

int	ft_ten_queens_puzzle(void)
{
	int	nb_queen;
	int	i;
	int	j;
	int	**tab;

	tab = ft_create_chessboard();
	nb_queen = 0;
	while (nb_queen != 10)
	{
		i = 0;
		while (i < 10)
		{	
			j = 0;
			while (j < 10)
			{
				if (ft_check(tab, i, j)
					tab[i][j] = 1;
				j ++;
			}
			i ++;
		}
		nb_queen ++;
	}
}

void	ft_print_tab(int **tab);

int	main(void)
{
	ft_ten_queens_puzzle();
	ft_print_tab{tab};
}
