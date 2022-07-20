/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:16:03 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/20 17:03:01 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    ft_space_count(char *str)
{
    int    i;

    i = 0;
    while (str[i] == ' '
        || str[i] == '\t'
        || str[i] == '\n'
        || str[i] == '\v'
        || str[i] == '\f'
        || str[i] == '\r')
        i++;
    return (i);
}

int    ft_check_base(char *base, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    if (size <= 1)
        return (0);
    while (i < size)
    {
        if (base[i] == '-' || base[i] == '+')
            return (0);
        if (base[i] <= 32 || base[i] > 126)
            return (0);
        j = i + 1;
        while (j < size)
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int    ft_baseid(char c, char *base, unsigned int base_size)
{
    unsigned int    id;

    id = 0;
    while (id < base_size)
    {
        if (c == base[id])
            return (id);
        id++;
    }
    return (-1);
}

int    ft_nb_in_dec_base(char *str, char *base, unsigned int base_size)
{
    unsigned int    i;
    unsigned int    id;
    int                nb;

    nb = 0;
    i = 0;
    while (id < base_size && str[i])
    {
        id = ft_baseid(str[i], base, base_size);
            if (id == -1)
                return (nb);
        nb = nb * base_size + id;
        i++;
        
    }
    return (nb);
}

int    ft_atoi_base(char *str, char *base)
{
    unsigned int    i;
    unsigned int    base_size;
    int                sign;
    int                nb;

    sign = 0;
    nb = 0;
    i = ft_space_count(str);
    base_size = 0;
    while (base[base_size])
        base_size;
    if (!ft_check_base(base, base_size))
        return (NULL);
    while (str[i] == '-' || str[i] == '+')
    {    
        if (str[i] == '-')
            sign ++;
        i++;
    }
    nb = ft_nb_in_dec_base(str + i, base, base_size);
    if (sign % 2 != 0)
        nb = -nb;
    return (nb);
}