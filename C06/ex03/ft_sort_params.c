/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:50:58 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/18 20:23:16 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i ++;
		else
			return (s2[i] - s1[i]);
	}
	return (0);
}

void	ft_putchar(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		write(1, &argv[i], 1);
		i ++;
	}
	write(1, "\n", 1);
}

char	*ft_compare(char *argv[], int argc)
{
	int		cmp;
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		cmp = ft_strcmp(argv[i], argv[i + 1]);
		if (cmp < 0)
		{
			tmp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = tmp;
			i = 0;
		}
		i ++;
	}
	return (*argv);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		ft_compare(argv, argc);
		while (i < argc)
		{
			ft_putchar(argv[i]);
			i ++;
		}
	}
}
