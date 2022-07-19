/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:57:58 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/19 15:03:27 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *argv)
{
	int	i;

	i = 0;
	while(argv[i])
	{
		write(1, &argv[i], 1);
		i ++;
	}
	write(1, "\n", 1);
}

int	main(int argc,char **argv)
{
	if (argc >= 1)
		ft_putstr(argv[0]);
	return (0);
}
