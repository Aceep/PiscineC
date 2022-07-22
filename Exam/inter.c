#include <unistd.h>
void	inter(char *av1, char *av2)
{
	int	i;
	int j;

	i = 0;
	while (av1[i])
	{
		j = i;
			while(j > 0)
			{
				if (av1[i] == av1[j])
						return
			}
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);

	write(1, "\n", 1);	
}