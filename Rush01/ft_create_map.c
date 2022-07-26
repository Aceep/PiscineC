/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:05:56 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/16 17:34:07 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fonctions.h"

void    ft_borders(int **tab, char *argv)
{
        int     argvid;
        int     tabid;

        argvid = 0;
        tabid = 1;
        while (argvid < 31)
        {
                if (argvid < 7)
                        tab[0][tabid] = argv[argvid] - '0';
                else if (argvid < 15)
                        tab[5][tabid] = argv[argvid] - '0';
                else if (argvid < 23)
                        tab[tabid][0] = argv[argvid] - '0';
                else if (argvid < 31)
                        tab[tabid][5] = argv[argvid] - '0';
                tabid ++;
                if (tabid % 5 == 0)
                        tabid = 1;
                argvid += 2;
        }
}

int     **ft_create_map(char *argv)
{
        int     **tab;
        int     i;
        int     j;

        i = 0;
        j = 0;
        tab = (int**)malloc(6 * sizeof(int *));
        while (i < 6)
	{
                tab[i] = (int*)malloc(4 * sizeof(int));
                i ++;
        }
        i = 0;
        while (i < 6)
        {
                while (j < 6)
                {
                        tab[i][j] = 0;
                        j ++;
                }
                j = 0;
                i ++;
        }
        ft_borders(tab, argv);
        return (tab);
}

