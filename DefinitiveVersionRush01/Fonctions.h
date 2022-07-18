/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fonctions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:13:43 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/17 12:20:00 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <unistd.h>
#include <stdlib.h>

int		ft_check(char *str);
int		**ft_create_map(char *argv);
int		ft_backtrack(int **tab, int id);
int		everything_ok(int **tab);
int		value_is_valid(int **tab, int id, int value);
void	ft_print_tab(int **tab);
void	ft_putchar(char c);

#endif
