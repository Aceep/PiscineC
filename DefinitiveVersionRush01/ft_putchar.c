/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:06:16 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/16 15:09:42 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fonctions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}
void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                ft_putchar(str[i]);
                i++;
        }
}

