/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:25:49 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/27 20:48:19 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_stdin(int *max)
{
	t_mapd	*md;

	max[0] = 0;
	max[1] = 0;
	max[2] = 0;
	md = ft_map_stdin();
	if (md == NULL)
		write(1, "map error\n", 10);
	else
		ft_solve(md, max);
}

int	ft_map_lstdin(t_mapd *md, char *map_data)
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
	return (md->width = map_w, 1);
}

char	*ft_read_stdin(int fd)
{
	char	buffer[1024];
	char	*map_data;
	int		bytes_read;
	int		i;
	int		size;

	i = 0;
	while (i < 1024)
		buffer[i++] = 0;
	bytes_read = read(0, buffer, 1024);
	size = bytes_read;
	if (!bytes_read)
		return (NULL);
	map_data = (char *)malloc(sizeof(char) * (bytes_read + 1));
	map_data = ft_strcpy(map_data, buffer, bytes_read);
	while (bytes_read)
	{
		bytes_read = read(fd, buffer, 1024);
		map_data = ft_mstrcat(map_data, buffer, bytes_read);
		size += bytes_read;
	}
	if (map_data[size - 1] != '\n')
		return (free(map_data), NULL);
	return (map_data[size - 1] = '\0', map_data);
}

t_mapd	*ft_map_stdin(void)
{
	char	*map_data;
	t_mapd	*md;

	map_data = ft_read_stdin(0);
	if (map_data == NULL)
		return (NULL);
	md = ft_init_map_descriptor();
	if (!ft_first_line(md, map_data))
		return (free(md->map), free(md->sym), free(md), NULL);
	if (ft_count_lines(map_data) != md->length)
		return (free(md->map), free(md->sym), free(md), NULL);
	if (!ft_map_lstdin(md, map_data))
		return (free(md->map), free(md->sym), free(md), NULL);
	ft_fill_map(md, map_data);
	free(map_data);
	return (md);
}
