/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:02:03 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/20 15:15:07 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i ++;
	return (i);
}

int	ft_size_for_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	if (size == 0)
		return (0);
	i = 0;
	count = 0;
	while (i < size)
		count += ft_strlen(strs[i++]);
	count += ft_strlen(sep) * (size - 1);
	return (count + 1);
}

char	*ft_putstr(char *dest, char *strs)
{
	int	t;
	int	i;

	t = 0;
	i = 0;
	t = ft_strlen(dest);
	while (strs[i])
	{
		dest[t + i] = strs[i];
		i ++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		j;

	j = ft_size_for_malloc(size, strs, sep);
	dest = (char *) malloc(sizeof(char) * j);
	if (!dest)
		return (NULL);
	j = 0;
	while (j < size)
	{
		ft_putstr(dest, strs[j]);
		if (j != size - 1)
			ft_putstr(dest, sep);
		j ++;
	}
	dest[ft_strlen(dest)] = 0;
	return (dest);
}
