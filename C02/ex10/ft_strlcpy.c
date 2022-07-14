/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:16:26 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/12 14:30:51 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (src[n])
		n++;
	if (size == 0)
		return (n);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (n);
}
