/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrak.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:04:28 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/16 18:38:27 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fonctions.h"

int	ft_backtrack(int **tab, int id)
{
	int	value;
	
	if (id == 16 && everything_ok(tab))
		return (1);
	if (id < 16)
	{
		value  = 1;
		while (value <= 4)
		{
			if (value_is_valid(tab, id, value))
			{
				tab[id / 4 + 1][id % 4 + 1] = value;
				if (ft_backtrack(tab, id + 1))
					return (1);
			}
			value ++;
		}
	}
	return (0);
}
