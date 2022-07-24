/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceep <aceep@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:30:23 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/25 00:34:42 by aceep            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	d;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i ++;
		else
		{
			if (s1[i] > s2[i])
			{
				d = s1[i] - s2[i];
				return (+d);
			}
			else if (s1[i] < s2[i])
			{
				d = s2[i] - s1[i];
				return (-d);
			}
		}
	}
	return (0);
}
