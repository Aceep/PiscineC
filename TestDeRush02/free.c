#include "rush02.h"

void	init_dico(char **dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dict[i] = 0;
		i++;
	}
}

int	check_nbr_dict(char **dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!dict[i])
			return (0);
		i++;
	}
	return (1);
}

void	free_dict(char **dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (dict[i])
			free(dict[i]);
		i++;
	}
}