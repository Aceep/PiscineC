/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:43:34 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/17 11:48:35 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_space_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32
		|| str[i] == '\f'
		|| str[i] == '\n'
		|| str[i] == '\r'
		|| str[i] == '\v'
		|| str[i] == '\t')
		i ++;
	return (&str[i]);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32
			|| base[i] == '\f'
			|| base[i] == '\n'
			|| base[i] == '\r'
			|| base[i] == '\v')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j ++;
		}
		i ++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (i);
}

int	check_id_base(char *base, char *str)
{
	int	j;
	int	count;
	int	i;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		while (base[j])
		{
			if (base[j] == str[i])
				count ++;
			j ++;
		}
		if (count == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_putbase(char *str, int base_count, char *base)
{
	int	i;
	int	nb;
	int	j;

	i = 0;
	nb = 0;
	if (check_id_base(base, str))
	{		
		while (str[i])
		{	
			j = 0;
			while (str[i] != base[j])
				j ++;
			nb = nb * base_count + j;
			i ++;
		}
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	minus_count;
	int	nbr;
	int	i;
	int	base_count;

	i = 0;
	base_count = ft_check_base(base);
	if (base_count == 0)
		return (0);
	str = ft_space_count(str);
	minus_count = 0;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			minus_count ++;
		i ++;
	}
	nbr = ft_putbase(str + i, base_count, base);
	if (minus_count % 2 != 0)
		nbr = -nbr;
	return (nbr);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		("%d", ft_atoi_base(argv[1], argv[2]));
	}
	return (0);
}*/
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}
