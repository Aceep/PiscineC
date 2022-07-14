/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:35:27 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/13 11:35:54 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i ++;
	while (src[j])
	{
		dest[i] = src[j];
		j ++;
		i ++;
	}
	dest[i] = 0;
	return (dest);
}
