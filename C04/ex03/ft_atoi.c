/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:03:32 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/14 19:05:43 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_count_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32
		|| str[i] == '\f'
		|| str[i] == '\n'
		|| str[i] == '\r'
		|| str[i] == '\v')
		i ++;
	return (&str[i]);
}

int	ft_minus_count(char *str)
{
	int	minus_count;
	int	i;

	i = 0;
	minus_count = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			minus_count++;
		i ++;
	}
	return (minus_count);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	j;

	nb = 0;
	str = ft_count_space(str);
	i = ft_minus_count(str);
	j = i;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i ++;
	}
	if (j % 2 != 0)
		nb = -nb;
	return (nb);
}
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		
	while (i <  argc)
	{
		printf("%d\n", ft_atoi(argv[i]));
		i ++;
	}
	}
	return 0;
}
