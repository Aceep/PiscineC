/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:05:56 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/16 15:29:06 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	if (i != 31)
		return (0);
	i = 0;
	while (i != 32)
	{
		if (str[i] < '1' || str[i] > '4')
			return (0);
		i += 2;
	}
	return (1);
}

int	**ft_create_map(void)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = (int**)malloc(4 * sizeof(int *));
	while (i < 4)
	{
		tab[i] = (int*)malloc(4 * sizeof(int));
		i ++;
	}
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			tab[i][j] = 0;
			j ++;
		}
		j = 0;
		i ++;
	}
	return (tab);
}
