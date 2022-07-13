#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	while (dest[i])
		i ++;
	if (nb == 0)
		return (dest);
	while (*src != '\0' && nb > 0)
	{
		dest[i] = *src;
		i ++;
		src++;
		nb --;
	}
	dest[i] = '\0';
	return (dest);
}
