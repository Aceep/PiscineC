/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dico.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:44:32 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/24 21:28:53 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	am_i_a_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i ++;
	}
	return (1);
}

t_number	*dict(t_number *tab, int idico, char *buf_num, char *buf_text)
{
	tab[idico].number = ft_strdup(buf_num);
	tab[idico].letter = ft_strdup(buf_text);
	return (tab);
}

t_number	*ft_tab(int fd, t_number *tab)
{
	int		i;
	char	buf_num[150];
	char	buf_text[100];
	int		idico;
	char	buffer[1];

	idico = 0;
	while (read(fd, buffer, 1) > 0)
	{
		i = 0;
		while (buffer[0] >= '0' && buffer[0] <= '9' && i < 38)
		{
			buf_num[i ++] = buffer[0];
			read(fd, buffer, 1);
		}
		while (buffer[0] == ' ' || buffer[0] == ':')
			read(fd, buffer, 1);
		i = 0;
		while (buffer[0] != '\n' && i < 60)
		{
			buf_text[i ++] = buffer[0];
			read(fd, buffer, 1);
		}
		buf_text[i] = '\0';
		if (buffer[0] == '\n')
			dict(tab, idico ++, buf_num, buf_text);
	}
	return (tab);
}

t_number	*ft_init_dico(char *dico_file, t_number *tab)
{
	int		fd;

	tab = malloc((sizeof(t_number) * 41));
	fd = open(dico_file, O_RDONLY);
	if (fd < 0)
		report_error();
	else
	{
		ft_tab(fd, tab);
		tab[40].number = "1000000000000000000000000000000000000";
		tab[40].letter = "undecillion";
	}
	return (tab);
}

int	ft_dico(char *dico, char *str)
{
	int			i;
	t_number	*tab;
	int			nb;

	tab = NULL;
	i = am_i_a_number(str);
	if (i == 0)
	{
		report_error();
		return (0);
	}
	tab = ft_init_dico(dico, tab);
	nb = ft_atoi(str);
	ft_compare_to_find(nb, tab);
	return (0);
}
