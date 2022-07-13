#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	c;
	int	n;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while  (str[i + j] == to_find[j])
			{
				j ++;
			}
		}
		if (to_find[j] == '\0' )
		{
			return (&str[i]);
		}
		j = 0;
		i ++;
	}
}

int	main()
{
	char *str = "Il etait une fois, une famille qui vivait dans les bois";
	char *to_find = "tait";
	
	printf("%s", ft_strstr(str, to_find));
}
