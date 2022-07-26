/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:58:14 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/26 21:44:54 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_first_line(t_mapd *md, char *map_data)
{
	int	i;
	int	size;
	int	nb_len;

	size = 0;
	nb_len = ft_atoil(map_data, &size);
	if (size <= 0)
		return (0);
	md->length = size;
	i = 0;
	while (map_data[i + nb_len] != '\n')
		i++;
	if (i != 3)
		return (0);
	md->sym[0] = map_data[nb_len];
	md->sym[1] = map_data[nb_len + 1];
	md->sym[2] = map_data[nb_len + 2];
	if (md->sym[0] == md->sym[1] || md->sym[0] == md->sym[2]
		|| md->sym[1] == md->sym[2] || md->sym[0] < 32
		|| md->sym[0] >= 127 || md->sym[1] < 32
		|| md->sym[1] >= 127 || md->sym[2] < 32
		|| md->sym[2] >= 127)
		return (0);
	return (1);
}

int	ft_map_lines(t_mapd *md, char *map_data, int file_size)
{
	int	i;
	int	map_w;
	int	line_w;

	i = 0;
	map_w = ft_width(map_data);
	while (map_data[i] != '\n')
		i++;
	while (map_data[i] != '\0')
	{
		i++;
		line_w = 0;
		while (map_data[i] != '\n' && map_data[i] != '\0')
		{
			if (!ft_is_valid(md->sym, map_data[i++]))
				return (0);
			line_w++;
		}
		if (line_w != map_w)
			return (0);
	}
	if (i != file_size - 1)
		return (0);
	return (md->width = map_w, 1);
}

int	ft_count_lines(char *map_data)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (map_data[i])
	{
		if (map_data[i] == '\n')
			n++;
		i++;
	}
	return (n);
}

t_mapd	*ft_init_map_descriptor(void)
{
	t_mapd	*md;

	md = (t_mapd *)malloc(sizeof(t_mapd));
	md->length = 0;
	md->width = 0;
	md->sym = (char *)malloc(sizeof(char) * 3);
	md->map = NULL;
	return (md);
}

t_mapd	*ft_gen_map(char *arg)
{
	char	*map_data;
	t_mapd	*md;
	int		fd;
	int		file_size;

	fd = open(arg, O_RDONLY);
	file_size = ft_file_size(fd);
	close(fd);
	fd = open(arg, O_RDONLY);
	map_data = ft_read_file(fd, file_size);
	if (map_data == NULL)
		return (NULL);
	md = ft_init_map_descriptor();
	if (!ft_first_line(md, map_data))
		return (NULL);
	if (ft_count_lines(map_data) != md->length)
		return (NULL);
	if (!ft_map_lines(md, map_data, file_size))
		return (NULL);
	ft_fill_map(md, map_data);
	free(map_data);
	return (md);
}
