/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:43:10 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/14 10:44:08 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i ++;
	if (nb == 0)
		return (dest);
	while (*src != '\0' && nb > 0)
	{
		dest[i] = *src;
		i ++;
		src++;
		nb --;
	}
	dest[i] = '\0';
	return (dest);
}
