#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i ++;
	while (src[j])
	{
		dest[i] = src[j];
		j ++;
		i ++;
	}
	dest[i] = 0;
	return (dest);
}

int	main()
{
	char dest[80];
	char *src = "source";
	strcpy(dest, "dest:");
	/*printf("%s = source, \n", strcat(dest, src));*/
	printf("%s = source", ft_strcat(dest, src));
}
