/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:31:52 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/11 20:20:26 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != 0)
	{
		write(1, &str[lenght], 1);
		lenght ++;
	}	
}
