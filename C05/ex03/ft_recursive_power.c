/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:20:08 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/21 09:47:10 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
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
		("%d\n", ft_recursive_power(nb, power));
	}
	return (0);
}*/
