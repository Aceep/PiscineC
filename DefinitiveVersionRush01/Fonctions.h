#ifndef Fonctions_h
#define Fonctions_H

#include <unistd.h>
#include <stdlib.h>

int     ft_check(char *str);
int     **ft_create_map(char *argv);
void    ft_print_tab(int **tab);
void    ft_putchar(char c);
int     ft_backtrack(int **tab, int id);
int	everything_ok(int **tab);
int	value_is_valid(int **tab, int id, int value);

#endif
