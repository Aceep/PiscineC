/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:08:20 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/25 20:38:43 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_read_file(int fd)
{
	char	buffer[1024];
	char	*map_data;
	int		bytes_read;

	bytes_read = read(fd, buffer, 1024);
	if (!bytes_read)
		return (NULL);
	map_data = (char *)malloc(sizeof(char) * bytes_read);
	ft_strcpy(map_data, buffer, bytes_read);
	while (bytes_read)
	{
		bytes_read = read(fd, buffer, 1024);
		map_data = ft_mstrcat(map_data, buffer, bytes_read);
	}
	return (map_data);
}
