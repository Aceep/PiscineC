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

/*char	*ft_count_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32
		|| str[i] == '\f'
		|| str[i] == '\n'
		|| str[i] == '\r'
		|| str[i] == '\v')
		i ++;
	return (&str[i]);
}

int	ft_minus_count(char *str)
{
	int	minus_count;
	int	i;

	i = 0;
	minus_count = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			minus_count++;
		i ++;
	}
	return (minus_count);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	j;

	nb = 0;
	str = ft_count_space(str);
	i = ft_minus_count(str);
	j = i;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i ++;
	}
	if (j % 2 != 0)
		nb = -nb;
	return (nb);
}*/

void	ft_putchar(char nbr)
{
	write(1, &nbr, 1);
}

void	ft_translate(int nbr, char *base, int nb_base)
{
	if (nbr >= nb_base)
		ft_translate(nbr / nb_base, base, nb_base);
	nbr = base[nbr % nb_base];
	ft_putchar(nbr);
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
	int	nb_base;

	if (nbr < 0)
		nbr = -nbr;
	nb_base = ft_count_base(base);
	if (nb_base != 0)
		ft_translate(nbr, base, nb_base);
}

/*int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 3)
	{
		ft_putnbr_base(ft_atoi(argv[i]), argv[i + 1]);
		write(1, "\n", 1);
		i ++;
	}
}*/
