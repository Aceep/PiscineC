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

#include <stdio.h>


long long int	ft_atoi(const char *str);
int 	ft_check_argument(int ac, char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	*report_error(void);
void ft_parsing_dico(char *str);

typedef struct s_number
{
	char	*number;
	char	*letter;
	int		*lenght;
	struct s_number *next;
}t_number;

#endif