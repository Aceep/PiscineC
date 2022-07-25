/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:34:37 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/25 18:24:04 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

# include <stdio.h>

typedef struct s_map_data
{
	int		width;
	int		lenght;
	char	*sym;
	int		**map;
}t_mapd;

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_print_map(t_map *map, int max);
void 	*ft_solve(t_mapd *map, int *max);

#endif