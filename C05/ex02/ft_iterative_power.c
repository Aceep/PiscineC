int	ft_iterative_power(int nb, int power)
{	
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * i;
		power --;
	}
	return (nb);
}
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	nb;
	int	power;

	if (argc == 3)
	{
		nb = atoi(argv[argc - 2]);
		power = atoi(argv[argc - 1]);
		printf("%d\n", ft_iterative_power(nb, power));
	}
	return (0);
}
