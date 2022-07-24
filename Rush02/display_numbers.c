/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:02:46 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/24 20:51:54 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	display_below_100(int nb, t_number *tab)
{
	if (nb > 20)
		display_up_20(nb, tab);
	else
		printf("%s", tab[nb].letter);
}

void	get_hundread(int nb, t_number *tab)
{
	nb = nb / 100;
	if (nb != '0')
		printf("%s hundred ", tab[nb].letter);
}

int	display_up_20(int nb, t_number *tab)
{
	int		i;
	char	d[3];
	char	u[2];

	if (nb >= 100)
		get_hundread(nb, tab);
	nb = nb % 100;
	if (nb == 0)
		return (0);
	d[0] = (nb / 10 + '0');
	d[1] = '0';
	d[2] = '\0';
	u[0] = nb % 10 + '0';
	u[1] = '\0';
	i = 0;
	while (!(ft_strcmp(d, tab[i].number) == 0))
		i++;
	if (d[0] != '0')
		printf("%s ", tab[i].letter);
	i = ft_atoi(u);
	if (u[0] != 48)
		printf("%s", tab[i].letter);
	return (0);
}
