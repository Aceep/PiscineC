/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:30:18 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/23 20:42:09 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
	write(1, "\n", 1);
}

void	ft_putchar(int nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int size)
{
	if (size >= 10)
		ft_putnbr(size / 10);
	size = size % 10 + 48;
	ft_putchar(size);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i ++;
	}
}

int main (int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
}