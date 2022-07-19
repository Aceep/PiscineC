/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:42:52 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/14 19:23:46 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char nb)
{

	write(1, &nb, 1);
}*/

void	ft_translate(long long int nb, char *base, int nb_base)
{
	if (nb >= nb_base)
		ft_translate(nb / nb_base, base, nb_base);
	write(1, &base[nb % nb_base], 1);
}

int	ft_count_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j ++;
		}
		if (base[i] <= 32 || base[i] == 127
			|| base[i] == '-'
			|| base[i] == '+' || base[i] == '\f'
			|| base[i] == '\n' || base[i] == '\r'
			|| base[i] == '\t' || base[i] == '\v')
			return (0);
		i ++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int		nb;
	int					nb_base;

	nb = (long long)nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	nb_base = ft_count_base(base);
	if (nb_base != 0)
		ft_translate(nb, base, nb_base);
}
/*#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}*/
