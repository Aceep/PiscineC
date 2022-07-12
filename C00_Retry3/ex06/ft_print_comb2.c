/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:24:54 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/10 13:54:11 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_display(int a, int b);
void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int a, int b)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_display(a, b);
			b ++;
		}
		a ++;
	}
}

/*int	main()
{
	ft_print_comb2();
}*/
