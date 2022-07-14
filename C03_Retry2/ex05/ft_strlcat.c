/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:41:32 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/13 17:39:15 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_slen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;
	unsigned int	dlen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j ++;
	dlen = j;
	slen = ft_slen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i ++;
		j ++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
