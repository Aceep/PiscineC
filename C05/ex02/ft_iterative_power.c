/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:16:14 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/21 09:45:46 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * i;
		power --;
	}
	return (nb);
}

/*
int	main(int argc, char *argv[])
{
	int	nb;
	int	power;

	if (argc == 3)
	{
		nb = (argv[argc - 2]);
		power = (argv[argc - 1]);
		("%d\n", ft_iterative_power(nb, power));
	}
	return (0);
}*/
