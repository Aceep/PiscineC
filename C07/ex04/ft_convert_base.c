/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceep <aceep@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:16:03 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/27 00:56:09 by aceep            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int     ft_strlen(char *nbr);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_putnbr_base(long long int nbr, char *base, char *fnbr);
int	l_nbr(int nbr, char *base, int lenght);

int    ft_check_base(char *base)
{
    unsigned int    i;
    unsigned int    j;

   i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	current_digit(char i, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (i == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	shift_to_nbr(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		nb;
	int		curr;
	int		power;

	nb = 0;
	i = 0;
	power = ft_check_base(base);
	if (power >= 2)
	{
		sign = shift_to_nbr(str, &i);
		curr = current_digit(str[i], base);
		while (curr != -1)
		{
			nb = (nb * power) + curr;
			i++;
			curr = current_digit(str[i], base);
		}
		return (nb *= sign);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		intnbr;
	int		lenght_nbrf;
	char	*finalnbr;

	if (ft_check_base(base_to) == 0 || ft_check_base(base_from) == 0)
		return (0);
	intnbr = ft_atoi_base(nbr, base_from);
	lenght_nbrf = l_nbr(intnbr, base_to, 0);
	finalnbr = (char *)malloc(sizeof(char) * (lenght_nbrf + 1));
	if (!finalnbr)
		return (0);
	ft_putnbr_base(intnbr, base_to, finalnbr);
	finalnbr[lenght_nbrf] = '\0';
	return (finalnbr);
}