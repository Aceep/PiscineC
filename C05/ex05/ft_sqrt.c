/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:17:19 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/21 09:56:52 by alycgaut         ###   ########.fr       */
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
	else
		return (0);
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
			("%d\n", ft_sqrt(nb));
			argc --;
		}
	}
	return (0);
}*/
