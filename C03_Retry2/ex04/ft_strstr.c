/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:38:14 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/14 10:35:28 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j ++;
		if (to_find[j] == '\0' )
			return (&str[i]);
		j = 0;
		i ++;
	}
	return (0);
}
