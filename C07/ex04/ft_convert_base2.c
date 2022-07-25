/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:33:18 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/25 19:22:30 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_itoa(int value_in_dec, char *base_to);

int    ft_check_base(char *base, unsigned int size);
int    ft_atoi_base(char *str, char *base, int base_from_size);

int     ft_strlen(char *nbr)
{
    int     i;

    i = 0;
    while (nbr[i])
            i ++;
        return (i);
}

void  *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    unsigned int    base_from_size;
    unsigned int    base_to_size;
    int     value_in_dec;

    base_from_size = ft_strlen(base_from);
    printf("%d\n", base_from_size);
    base_to_size = ft_strlen(base_to); printf("%d\n", base_to_size);
    if (!ft_check_base(base_from,  base_from_size) || !ft_check_base(base_to, base_to_size))
        return (0);
    
   value_in_dec = ft_atoi_base(nbr, base_from, base_from_size);
   printf("%d\n", value_in_dec);
    nbr = ft_itoa(value_in_dec, base_to);
}

void	ft_putnbr_base(long long int nbr, char *base)
{
	long long int		nb;
	int					nb_base;

	nb = (long long)nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	nb_base = ft_count_base(base);
	if (nb_base != 0)
		ft_translate(nb, base, nb_base);
}

void	ft_translate(long long int nb, char *base, int nb_base)
{
	if (nb >= nb_base)
		ft_translate(nb / nb_base, base, nb_base);
	write(1, &base[nb % nb_base], 1);
}

int main()
{
    char *nbr;

    nbr = "2a";
    printf("%p\n", ft_convert_base(nbr, "0123456789abcdef", "0123456789"));
}