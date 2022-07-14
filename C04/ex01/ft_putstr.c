/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:41:43 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/14 11:27:47 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
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
			ft_putstr(argv[i]);
			i ++;
		}
	}
}*/
