/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:31:32 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/12 19:16:25 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(int str)
{
	char	*base_hexa;
	char	hexa;

	base_hexa = "0123456789abcdef";
	hexa = base_hexa[str / 16];
	write(1, &hexa, 1);
	hexa = base_hexa[str % 16];
	write(1, &hexa, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			write(1, "\\", 1);
			ft_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i ++;
	}
}
/*int	main(void)
{
	char 	b1[]= "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(b1);
}*/
