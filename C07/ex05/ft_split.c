#include <stdlib.h>

int    is_incharset(char c, char *charset)
{
    int    i;

    i = 0;
    while (charset[i])
    {
        if (charset[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    **ft_alloc_tab(char *str, char *charset)
{
    int        tab_size;
    char    **tab;
    int        i;

    tab_size = 0;
    i = 0;
    while (str[i])
    {
        if (!is_incharset(str[i], charset)
            && (is_incharset(str[i + 1], charset) || str[i + 1] == 0))
            tab_size++;
        i++;
    }
    tab = (char **)malloc(sizeof(char *) * tab_size + 1);
    if (!tab)
        return (NULL);
    return (tab);
}

int    ft_get_str(char **tab, char *str, char *charset, int idx_l)
{
    int    size;
    int    i;

    size = 1;
    while (!is_incharset(str[size], charset) && str[size])
            size++;
    tab[idx_l] = (char *)malloc(sizeof(char) * size);
    if (tab[idx_l] == 0)
        return (0);
    i = 0;
    while (i < size)
    {
        tab[idx_l][i] = str[i];
        i++;
    }
    tab[idx_l][size] = 0;
    return (size);
}

char    **ft_split(char *str, char *charset)
{
    char    **tab;
    int        idx_l;
    int        i;

    tab = ft_alloc_tab(str, charset);
    i = 0;
    idx_l = 0;
    while (str[i])
    {
        if (!is_incharset(str[i], charset) && str[i])
        {
            i += ft_get_str(tab, str + i, charset, idx_l);
            idx_l++;
        }
        else
            i++;
    }
    tab[idx_l] = 0;
    return (tab);
}
/*
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

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
}*/