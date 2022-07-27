/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:33:18 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/27 17:08:12 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_base(char *base, unsigned int size);
int		ft_atoi_base(char *str, char *base, int base_from_size);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_strlen(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
		i ++;
	return (i);
}

int	l_nbr(int nbr, char *base, int lenght)
{
	int				base_lenght;
	unsigned int	nb;

	base_lenght = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		lenght++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_lenght)
	{
		nb /= base_lenght;
		lenght++;
	}
	lenght++;
	return (lenght);
}

void	ft_putnbr_base(long long int nbr, char *base, char *fnbr)
{
	long long int		nb;
	int					l_base;
	int					l_nbrf;
	int					i;

	l_base = ft_strlen(base);
	l_nbrf = l_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		i = 1;
	}
	l_nbrf --;
	//printf("%lld",nb);
	while (nb >= l_base)
	{
		fnbr[l_nbrf] = base[nb % l_base];
		nb /= l_base;
		l_nbrf--;
	}
	if (nb < l_base)
		fnbr[l_nbrf] = base[nb];
}
