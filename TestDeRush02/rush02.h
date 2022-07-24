/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:02:27 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/23 21:13:12 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


long long int	ft_atoi(const char *str);
int 	ft_check_argument(int ac, char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int	strcmp_nbr(char *nbr1, char *nbr2);
void	*report_error(void);
void	ft_dico(char **tab_dico, char *str, char *dico);
void 	print_num(char **dico, unsigned int nb);
void	init_dico(char **dict, int size);
void	fill_dict(char **dict, char *line);
void	free_dict(char **dict, int size);
void	print_number_str(char **dict, unsigned int nbr, int global);


#endif