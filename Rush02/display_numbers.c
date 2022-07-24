/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:02:46 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/24 21:53:59 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	display_below_100(int nb, t_number *tab)
{
	char	*c;
	
	if (nb > 20)
		display_up_20(nb, tab);
	else
	{
		c = tab[nb].letter;
		ft_putstr(c);
	}
}

void	get_hundread(int nb, t_number *tab)
{
	char	*c;

	nb = nb / 100;
	if (nb != '0')
	{
		c = tab[nb].letter;
		ft_putstr(c);
		ft_putstr(" hundred ");
	}
}

int	display_up_20(int nb, t_number *tab)
{
	int		i;
	char	d[3];
	char	u[2];
	char	*c ;
	c ="5";
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
	{
		c = tab[i].letter;
		ft_putstr(c);
	}
	i = ft_atoi(u);
	if (u[0] != 48)
	{
		c = tab[i].letter;
		ft_putstr(c);
	}
	return (0);
}
