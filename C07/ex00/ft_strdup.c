/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:33:58 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/19 18:12:06 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i ++;
	dest = malloc(i * sizeof(char));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src = "Bonjour, je suis la source";
	char	*dest;
	int	i;

	i = 0;
	dest = ft_strdup(src);
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i ++;
	}
	return (0);
}*/
