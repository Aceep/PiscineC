/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:08:13 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/26 17:16:07 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoil(char *str, int *nb)
{
	int				i;
	int				sign;

	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		*nb = *nb * 10 + str[i] - '0';
		i++;
	}
	*nb = sign * *nb;
	return (i);
}

int	ft_width(char *map_data)
{
	int	i;
	int	width;

	i = 0;
	width = 0;
	while (map_data[i] != '\n')
		i++;
	i++;
	while (map_data[i] != '\n' && map_data[i] != '\0')
	{
		i++;
		width++;
	}
	return (width);
}

int	ft_is_valid(char *sym, char c)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (sym[i++] == c)
			return (1);
	}
	return (0);
}
