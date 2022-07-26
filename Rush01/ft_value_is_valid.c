/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_value_is_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:12:27 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/17 12:13:09 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fonctions.h"

int	ft_row(int **tab, int id, int value)
{
	while (id % 4 != 0)
	{
		id --;
		if (tab[id / 4 + 1][id % 4 + 1] == value)
			return (0);
	}
	return (1);
}

int	ft_column(int **tab, int id, int value)
{
	while (id / 4 != 0)
	{
		id -= 4;
		if (tab[id / 4 + 1][id % 4 + 1] == value)
			return (0);
	}
	return (1);
}

int	value_is_valid(int **tab, int id, int value)
{
	if (!ft_column(tab, id, value) || !ft_row(tab, id, value))
		return (0);
	return (1);
}
