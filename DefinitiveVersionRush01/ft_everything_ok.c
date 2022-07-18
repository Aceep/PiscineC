/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_everything_ok.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:04:47 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/17 12:06:41 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fonctions.h"

int	view_from_up(int **tab, int i)
{
	int	j;
	int	count_view;
	int	max;

	j = 1;
	count_view = tab[0][i];
	max = 0;
	while (j <= 4)
	{
		if (tab[j][i] > max)
		{
			count_view --;
			max = tab[j][i];
		}
		j ++;
	}
	if (count_view != 0)
		return (0);
	return (1);
}

int	view_from_down(int **tab, int i)
{
	int	j;
	int	count_view;
	int	max;

	j = 4;
	count_view = tab[5][i];
	max = 0;
	while (j > 0)
	{
		if (tab[j][i] > max)
		{
			count_view --;
			max = tab[j][i];
		}
		j --;
	}
	if (count_view != 0)
		return (0);
	return (1);
}

int	view_from_left(int **tab, int i)
{
	int	j;
	int	count_view;
	int	max;

	j = 1;
	count_view = tab[i][0];
	max = 0;
	while (j <= 4)
	{
		if (tab[i][j] > max)
		{
			count_view --;
			max = tab[i][j];
		}
		j ++;
	}
	if (count_view != 0)
		return (0);
	return (1);
}

int	view_from_right(int **tab, int i)
{
	int	j;
	int	count_view;
	int	max;

	j = 4;
	count_view = tab[i][5];
	max = 0;
	while (j > 0)
	{
		if (tab[i][j] > max)
		{
			count_view --;
			max = tab[i][j];
		}
		j --;
	}
	if (count_view != 0)
		return (0);
	return (1);
}

int	everything_ok(int **tab)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (!view_from_up(tab, i) || !view_from_down(tab, i)
			|| !view_from_left(tab, i) || !view_from_right(tab, i))
			return (0);
		i ++;
	}
	return (1);
}
