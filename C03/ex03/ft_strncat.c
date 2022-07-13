#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	while (j < nb)
	{
		dest[i] = src[j];
		j ++;
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char	dest[15];
	char	*src = "source";

	strcpy(dest, "dest:");
	printf("%s", ft_strncat(dest, src, 3));
}
