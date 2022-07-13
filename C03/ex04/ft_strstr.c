#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if  (*to_find == '\0')
		retrun (str);
	while (str[i])
	{
		while  (str[i + j] == to_find[j] && str[i + j] != '\0')
			j ++;
		if (to_find[j] == '\0' )
			return (&str[i]);
		j = 0;
		i ++;
	}
	return (0);
}
