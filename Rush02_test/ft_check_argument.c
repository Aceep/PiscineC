/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceep <aceep@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:15:35 by alycgaut          #+#    #+#             */
/*   Updated: 2022/08/01 11:39:38 by aceep            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_check_argument(int ac, char *str)
{
	long long int		i;

	i = ft_atoi(str);
	if ((ac != 3 && ac != 2) || i < 0 || ac == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
