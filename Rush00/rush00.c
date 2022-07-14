/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:16:33 by lduheron          #+#    #+#             */
/*   Updated: 2022/07/09 16:34:36 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c);

void	cas1(int x, int y)
{
	int	i;

	i = 0;
	while (i != x - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
}

void	cas2(int x, int y)
{
	int	t;

	t = 0;
	ft_putchar('\n');
	while (t != y - 2)
	{	
		ft_putchar('|');
		ft_putchar('\n');
		t++;
	}
	ft_putchar('o');
}

void	cas3(int x, int y)
{
	int	i;
	int	t;

	i = 0;
	ft_putchar('\n');
	while (i != y - 2)
	{
		t = 0;
		ft_putchar('|');
		while (t != x - 2)
		{
			ft_putchar(' ');
			t++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('o');
	i = 0;
}

void	cas4(int x, int y)
{
	int	i;

	i = 0;
	while (i != x - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	ft_putchar('o');
	if (y == 1 && x != 1)
	{
		cas1(x, y);
	}
	else if (x == 1 && y != 1)
	{
		cas2(x, y);
	}
	else
	{
		cas1(x, y);
		cas3(x, y);
		cas4(x, y);
	}
}
