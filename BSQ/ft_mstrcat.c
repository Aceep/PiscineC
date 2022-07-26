/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:53:46 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/26 19:51:05 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_mstrcat(char *src1, char *src2, unsigned int size)
{
	unsigned int	i;
	unsigned int	l_src1;
	char			*dest;

	i = 0;
	l_src1 = ft_strlen(src1);
	if (size == 0)
		return (src1);
	dest = (char *)malloc(sizeof(char) * (l_src1 + size + 1));
	if (!dest)
		return (NULL);
	while (i < l_src1)
	{
		dest[i] = src1[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		dest[l_src1 + i] = src2[i];
		i++;
	}
	free(src1);
	dest[l_src1 + i] = '\0';
	return (dest);
}
