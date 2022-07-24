/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_dico.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:44:32 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/23 21:14:42 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"



int		am_i_a_number(char *str)
{
		int		i;

		i = 0;
		while (str[i])
		{
			if (str[i] < '0' || str[i] > '9')
				return (0);
			i ++;
		}
		return (1);
}

int	get_next_line(int fd, char **line)
{
	char	buff[2];
	char	*cpy;
	int		size;

	buff[1] = 0;
	size = 1;
	*line = malloc(size * sizeof(char));
	*line[0] = 0;
	while (read(fd, buff, 1) > 0)
	{
		cpy = malloc(size * sizeof(char));
		ft_strncpy(cpy, *line, size);
		free(*line);
		size++;
		*line = malloc(size * sizeof(char));
		ft_strncpy(*line, cpy, size - 1);
		free(cpy);
		ft_strncat(*line, buff, 1);
		if (buff[0] == '\n')
			break ;
	}
	return (size);
}

int	check_line_nbr(char *line)
{
	int	i;

	i = 0;
	while (line[i] && line[i] >= '0' && line[i] <= '9')
		i++;
	if (line[i] != ' ' && line[i] != ':')
		return (0);
	if (line[i] == ' ')
	{
		while (line[i] && line[i] == ' ')
			i++;
		if (line[i] != ':')
			return (0);
	}
	while (line[i] == ' ')
		i++;
	if (line[i] < 32 || line[i] > 126)
		return (0);
	while (line[i] > 31 && line[i] <= 126)
		i++;
	if (line[i] != '\n')
		return (0);
	return (2);
}

int	check_line(char *line)
{
	int	i;

	i = 0;
	if (line[0] >= '0' && line[0] <= '9')
		return (check_line_nbr(line));
	while (line[i] && line[i] != '\n')
	{
		if (line[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int		read_in_dico(char **num_tab, char *dico)
{
	int		fd;
	int		is_correct;
	char *line;

	fd = open(dico, O_RDONLY);
	if (fd < 0)
		report_error();
	while (get_next_line(fd, &line) > 1)
	{
		is_correct = check_line(line);
		if (!is_correct)
			report_error();
		else if (is_correct == 2)
			fill_dict(is_correct, line);
		free(line);
	}
	free(line);
	return (check_nbr_dict(num_tab, 41));
	
}

void ft_dico(char **tab_dico, char *str, char *dico)
{
	int		i;

	i = am_i_a_number(str);
	if (i == 0)
		 report_error();
	
	if (read_in_dico(tab_dico, dico)_;
{
			print_number_str(dict, num, 1);}
}