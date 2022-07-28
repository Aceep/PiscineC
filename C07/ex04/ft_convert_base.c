/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:16:03 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/28 17:05:07 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *nbr);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_putnbr_base(long long int nbr, char *base, char *fnbr);
int		l_nbr(int nbr, char *base, int lenght);

int	ft_check_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

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

int	id_in_base(char nb, char *base)
{
	int	id;

	id = 0;
	while (base[id] != '\0')
	{
		if (nb == base[id])
			return (id);
		id++;
	}
	return (-1);
}

int	nb_in_dec(char *str, int *ptr_i)
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

int	ft_atoi_base(char *nbr, char *base)
{
	int		i;
	int		sign;
	int		nb;
	int		id;
	int		power;

	nb = 0;
	i = 0;
	power = ft_check_base(base);
	if (power >= 2)
	{
		sign = nb_in_dec(nbr, &i);
		id = id_in_base(nbr[i], base);
		while (id != -1)
		{
			nb = (nb * power) + id;
			i++;
			id = id_in_base(nbr[i], base);
		}
		return (nb *= sign);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_intversion;
	int		lenght_nbrf;
	char	*nbr_final;

	if (ft_check_base(base_to) == 0 || ft_check_base(base_from) == 0)
		return (0);
	nb_intversion = ft_atoi_base(nbr, base_from);
	//printf("%d", nb_intversion);
	lenght_nbrf = l_nbr(nb_intversion, base_to, 0);
	nbr_final = (char *)malloc(sizeof(char) * (lenght_nbrf + 1));
	if (!nbr_final)
		return (0);
	ft_putnbr_base(nb_intversion, base_to, nbr_final);
	
	nbr_final[lenght_nbrf] = '\0';
	printf("%s", nbr_final);
	return (nbr_final);
}

