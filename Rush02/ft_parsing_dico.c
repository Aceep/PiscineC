/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_dico.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:44:32 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/23 21:14:42 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		am_i_a_number(char *str)
{
		int		i;

		i = 0;
		while (str[i])
		{
			if (str[i] < '0' || str[i] > '9')
				return (0);
			i ++;
		}
		return (1);
}

void ft_parsing_dico(char *str)
{
	int		i;

	i = am_i_a_number(str);
	if (i == 0)
		 report_error();
}