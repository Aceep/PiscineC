/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:47:23 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/11 15:50:58 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	rev;

	t = 0;
	size = size - 1;
	while (t <= size)
	{
		rev = tab[size];
		tab[size] = tab[t];
		tab[t] = rev;
		t ++;
		size --;
	}
}
