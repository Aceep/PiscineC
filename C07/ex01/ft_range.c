/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:22:40 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/20 12:55:50 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab_int;
	int	i;

	if (min >= max)
		return (NULL);
	tab_int = (int *) malloc (sizeof (*tab_int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab_int[i] = min;
		i++;
		min++;
	}
	return (tab_int);
}
