/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:19:01 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/21 09:36:29 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (i - 1 != 1)
	{
		nb = nb * (i - 1);
		i --;
	}
	return (nb);
}

/*
int	main(int argc, char *argv[])
{
	int	nb;

	if (argc >= 2)
	{
		while ( argc > 1)
		{
			nb = (argv[argc - 1]);
			nb = ft_iterative_factorial(nb);
			argc --;
			("%d\n", nb);
		}
	}
	return (0);
}*/
