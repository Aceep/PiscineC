/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:28:23 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/16 15:24:08 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	**ft_create_map(void);
void	ft_putchar(char c);

void	ft_print_tab(int **tab)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putchar(tab[i][j] + 48);
			ft_putchar(' ');
			j ++;
		}
		ft_putchar('\n');
		j = 0;
		i ++;
	}
}
