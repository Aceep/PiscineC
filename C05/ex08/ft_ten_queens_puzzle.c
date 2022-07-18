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

/*int	ft_create_chessboard(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10) 
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}*/

int	ft_check_line_diag(int **tab, int i, int j)
{
	int	n;

	n = 0;
	while (n < 10)
	{
		if (tab[n][j] == 1)
			return (0);
		n ++;
	}
	n = 1;
	while (i + n < 10 && j + n < 10)
	{
		if (tab [i + n][j + n] == 1)
			return (0);
		n++;
	}
	n = 1;
	while (i - n >= 0 && j + n < 10)
	{
		if (tab [i - n][j + n] == 1)
			return (0);
		n++;
	}
	return (1);
}

int	ft_check_diag(int **tab, int i, int j)
{
	int	n;

	n = 1;
	while (i + n < 10 && j - n >= 0)
	{
		if (tab [i + n][j - n] == 1)
			return (0);
		n++;
	}	
	n = 1;
	while (i - n >= 0 && j - n >= 0)
	{
		if (tab [i - n][j - n] == 1)
			return (0);
		n++;
	}
	return (1);
}

void	ft_search(char tab, int nb_queen)
{
	if (nb_queen == 10)
	{
		ft_diplay();
		return ;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];

	ft_search(tab, nb_queen);
	/*while (nb_queen != 10)
	{
		i = 0;
		while (i < 10)
		{	
			j = 0;
			while (j < 10)
			{
				if (ft_check(tab, i, j) && ft_check_diag(tab, i, j))
					tab[i][j] = 1;
				else
					tab[i][j] = 0;				
				j ++;
			}
			i ++;
		}
		nb_queen ++;
	}*/
}

int	main(void)
{
	ft_ten_queens_puzzle();
}
