#include <unistd.h>

int 	main (int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		//if (argv[1][i] == 0)
		//write (1, "\n", 1);
	while (argv[1][i] == '\t' || argv[1][i] == 32)
			i++;
	while ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
	{
		write(1, &argv[1][i], 1);
		i ++;
	}
	write (1, "\n", 1);
	}
	else 
	write (1, "\n", 1);
}