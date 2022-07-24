/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:02:27 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/24 21:40:48 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>

typedef struct s_number
{
	char	*number;
	char	*letter;
}t_number;

long long int	ft_atoi(const char *str);
int				ft_check_argument(int ac, char *str);
int				ft_strlen(char *str);
void			ft_putstr(char *tab);
int				ft_strcmp(char *s1, char *s2);
void			*report_error(void);
int				ft_dico(char *dico, char *str);
void			ft_compare_to_find(int nb, t_number *tab);
int				ft_strstr(char *str, char *to_find);
char			*ft_strdup(char *src);
void			display_below_100(int nb, t_number *tab);
int				display_up_20(int nb, t_number *tab);

#endif
