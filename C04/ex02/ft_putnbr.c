/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:42:48 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/14 17:00:33 by alycgaut         ###   ########.fr       */
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

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	if (nb != -2147483648)
	{
		nb = nb % 10 + 48;
		ft_putchar(nb);
	}
}

/*int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			ft_putnbr(ft_atoi(argv[i]));
			ft_putchar('\n');
			i ++;
		}
	}
}*/
