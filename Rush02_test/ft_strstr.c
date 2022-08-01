/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:38:14 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/24 14:07:52 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (*to_find == '\0')
		return (0);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j ++;
		if (to_find[j] == '\0' )
			return (1);
		j = 0;
		i ++;
	}
	return (0);
}
