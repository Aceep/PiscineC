/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:15:54 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/14 11:16:04 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

/*void	ft_putchar(int i)
{
	char	nb;

	if (i >= 10)
		ft_putchar(i / 10);
	nb = i % 10 + 48;
	write(1, &nb, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{	
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			ft_putchar(ft_strlen(argv[i]));
			i ++;
		}
	}
	return (0);
}*/
