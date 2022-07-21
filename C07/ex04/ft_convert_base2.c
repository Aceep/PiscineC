int    ft_check_base(char *base, unsigned int size);
int    ft_atoi_base(char *str, char *base, int base_from_size);

int     ft_strlen(char *nbr)
{
    int     i;

    i = 0;
    while (nbr[i])
            i ++;
        return (i);
}

char  *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    unsigned    base_from_size;
    unsigned    base_to_size;
    int     value_in_dec;

    base_from_size = ft_strlen(base_from);
    base_to_size = ft_strlen(base_to);
    if (!ft_check_base(base_from,  base_from_size) || !ft_check_base(base_to, base_to_size))
        return (0);
    value_in_dec = ft_atoi_base(nbr, base_from, base_from_size);
    nbr = ft_itoa(value_in_dec, base_to);
}
#include <stdio.h>

int main()
{
    char *nbr;

    nbr = "2a";
    printf("%d\n", ft_convert_base(nbr, "0123456789abcdef", "0123456789"));
}