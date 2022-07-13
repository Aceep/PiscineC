#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	if (size == 0 || size < i)
		return (size);
	while (j <= size - i )
	{ 
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	return (i);
}

int	main()
{
	char dest[20];
	char *src = "quefais-tu ?";

	strcpy(dest, "Bonjour");
	printf("%d", ft_strlcat(dest, src, 11));
}
