/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:55:41 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/21 15:37:08 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	while (sqrt * sqrt < nb && sqrt < 46341)
		sqrt ++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	retrun (sqrt);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	sqrt = ft_sqrt(nb);
	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb / i)
	{	
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!ft_is_prime(nb + i))
		i ++;
	return (nb + i);
}
/*
int	main(int argc, char *argv[])
{
	int	nb;

	if (argc >= 2)
	{
		while (argc > 1)
		{
			nb = (argv[argc - 1]);
			argc --;
			("%d est le prochain premier \n", ft_find_next_prime(nb));
		}
	}
	return (0);
}*/
