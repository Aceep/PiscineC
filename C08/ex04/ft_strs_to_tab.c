/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:30:47 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/21 19:12:05 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int 	strlen(char *av)
{
	int 	i;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{	
	int 	i;

	i = 1;
	t_stock_str tab;

	tab.size = ft_strlen(av[i]);
	tab.str = av[i];
	tab.copy = ft_strcpy(av[i]);

	return ();
}

