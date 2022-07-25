/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:58:14 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/25 20:38:22 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

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

	fd = open(arg, O_RDONLY);
	map_data = ft_read_file(fd);
	md = ft_init_map_descriptor();
	if (!ft_first_line(md, map_data))
		return (NULL);
	if (!ft_map_lines(md, map_data))
		return (NULL);
	ft_fill_map(md, map_data);
	return (md);
}
