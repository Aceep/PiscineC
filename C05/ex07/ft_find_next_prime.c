/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:55:41 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/18 12:43:44 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb / 2)
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

	i = 1;
	while (!ft_is_prime(nb + i))
		i ++;
	return (nb + i);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	nb;

	if (argc >= 2)
	{
		while (argc > 1)
		{
			nb = atoi(argv[argc - 1]);
			argc --;
			printf("%d est le prochain premier\n apres %d\n", ft_find_next_prime(nb), nb);
		}
	}
	return (0);
}
*/
