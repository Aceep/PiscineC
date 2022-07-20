int    ft_check_base(char *base, unsigned int size);

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    unsigned    base_from_size;
    unsigned    base_to_size;

    base_from_size = ft_baselen(base_from);
    base_to_size = ft_baselen(base_to);
    if (!ft_check_base(base_from,  base_from_size) || !ft_check_base(base_to, base_to_size))
}