/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:35:18 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/16 15:35:30 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_check(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i ++;
        if (i != 31)
                return (0);
        i = 0;
        while (i != 32)
        {
                if (str[i] < '1' || str[i] > '4')
                        return (0);
                i += 2;
        }
        return (1);
}

