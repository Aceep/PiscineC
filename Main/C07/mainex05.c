
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *sep);

int		c_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		c_strctn(char *str1, char *str2, int at)
{
	int	len;
	int	i;

	len = c_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char	*c_strautojoin(char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = c_strlen(sep);
	i = 0;
	while (strs[i] != NULL)
	{
		len += c_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			len += seplen;
		i++;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (strs[j])
	{
		i = c_strctn(str, strs[j++], i);
		if (strs[j])
			i = c_strctn(str, sep, i);
	}
	return (str);
}

int		main(void)
{
	char **tab;

	tab = ft_split("Ceci&est$un##############################################################################################################################################################succes@!", "&$#@");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "CUT");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("", "");
	printf("OK\n");
	tab = ft_split("", "CUT");
	printf("OK\n");
	tab = ft_split("       ", "       ");
	printf("OK\n");
	tab = ft_split("         ", "       ");
	printf("OK\n");
}