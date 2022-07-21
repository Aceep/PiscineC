/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:56:28 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/21 09:43:07 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fact = (nb * ft_recursive_factorial(nb - 1));
	return (fact);
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
			("%d\n", ft_recursive_factorial(nb));
			argc --;
		}
	}
	return (0);
}*/
