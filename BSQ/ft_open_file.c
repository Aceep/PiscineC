/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:08:20 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/26 21:43:17 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_file_size(int fd)
{
	char	buffer[1024];
	int		bytes_read;
	int		size;

	bytes_read = 1;
	size = 0;
	while (bytes_read)
	{
		bytes_read = read(fd, buffer, 1024);
		size += bytes_read;
	}
	return (size);
}

char	*ft_read_file(int fd, int size)
{
	char	buffer[1024];
	char	*map_data;
	int		bytes_read;
	int		i;

	i = 0;
	while (i < 1024)
		buffer[i++] = 0;
	bytes_read = read(fd, buffer, 1024);
	if (!bytes_read)
		return (NULL);
	map_data = (char *)malloc(sizeof(char) * (bytes_read + 1));
	map_data = ft_strcpy(map_data, buffer, bytes_read);
	while (bytes_read)
	{
		bytes_read = read(fd, buffer, 1024);
		map_data = ft_mstrcat(map_data, buffer, bytes_read);
	}
	if (map_data[size - 1] != '\n')
		return (NULL);
	return (map_data[size - 1] = '\0', map_data);
}
