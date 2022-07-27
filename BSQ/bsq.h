/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:04:25 by maaliber          #+#    #+#             */
/*   Updated: 2022/07/27 18:52:57 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_map_data
{
	int		width;
	int		length;
	char	*sym;
	int		**map;
}t_mapd;

char	*ft_strcpy(char *dest, char *src, int size);
int		ft_strlen(char *str);
char	*ft_mstrcat(char *src1, char *src2, unsigned int size);
char	*ft_read_file(int fd, int size);
int		ft_atoil(char *str, int *nb);
int		ft_first_line(t_mapd *md, char *map_data);
int		ft_width(char *map_data);
int		ft_is_valid(char *sym, char c);
int		ft_map_lines(t_mapd *md, char *map_data, int file_size);
int		**ft_init_map(int length, int width);
void	ft_fill_map(t_mapd *md, char *map_data);
t_mapd	*ft_init_map_descriptor(void);
t_mapd	*ft_gen_map(char *arg);
void	ft_print_map(t_mapd *md);
void	ft_putchar(char c);
int		ft_solve(t_mapd *map, int *max);
void	ft_fill_x(t_mapd *md, int *max);
int		ft_file_size(int fd);
int		ft_count_lines(char *map_data);
int		ft_map_lstdin(t_mapd *md, char *map_data);
char	*ft_read_stdin(int fd);
t_mapd	*ft_map_stdin(void);
void	ft_stdin(int *max);
void	ft_free(t_mapd *map);

#endif