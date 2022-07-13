#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	d;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i ++;
		else
		{
			if (s1[i] > s2[i])
			{
				d = s1[i] -s2[i];
				return (+d);
			}
			else if (s1[i] < s2[i])
			{
				d = s2[i] - s1[i];
				return (-d) ;
			}
		}
	}
	return 0;
}
int	main ()
{
	char *s1 = "Bo";
	char *s2 = "Bonjour";

	printf("%d", ft_strcmp(s1, s2));
	printf("\n%d", strcmp(s1, s2));
}
