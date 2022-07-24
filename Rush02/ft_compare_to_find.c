/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_to_find.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:27:00 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/24 21:29:05 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_compare_to_find(int nb, t_number *tab)
{
	if (nb == 0)
		printf("%s", tab[0].letter);
	if (nb >= 1000000000)
	{
		display_below_100(nb / 1000000000, tab);
		printf("  billion  ");
	}
	nb = nb % 1000000000;
	if (nb >= 1000000)
	{
		display_below_100(nb / 1000000, tab);
		printf("  million  ");
	}
	nb = nb % 1000000;
	if (nb >= 1000)
	{
		display_below_100(nb / 1000, tab);
		printf(" thousand ");
	}
	nb = nb % 1000;
	if (nb <= 999 && nb != 0)
		display_below_100(nb, tab);
	printf("\n");
}
