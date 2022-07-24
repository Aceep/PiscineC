/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_to_find.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:27:00 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/24 17:53:38 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_compare_to_find(char *str, t_number *tab)
{
	int	i;
	int	j;
	int	ret;

	ret = 0;
	j = ft_strlen(str);
	i = 0;
	while (ret != 1)
	{
		ft_strstr(str, tab[i].number);
		i ++;
	}
	printf("%d", i);
	return (str);
}
