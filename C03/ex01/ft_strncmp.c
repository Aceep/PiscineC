#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i ++;
		else
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else 
				return (s1[i] - s2[i]);
	}
	return (0);
}

int	main()
{
	char *s1 = "Bonjour";
	char *s2 = "Bonjgour";

	printf("%d => %d", strncmp(s1, s2, 0), ft_strncmp(s1, s2, 0));
}
