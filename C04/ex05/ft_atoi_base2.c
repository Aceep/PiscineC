int    ft_space_count(char *str)
{
    int    i;

    i = 0;
    while (str[i] == ' '
        || str[i] == '\t'
        || str[i] == '\n'
        || str[i] == '\v'
        || str[i] == '\f'
        || str[i] == '\r')
        i++;
    return (i);
}

int    ft_check_base(char *base, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    if (size <= 1)
        return (0);
    while (i < size)
    {
        if (base[i] == '-' || base[i] == '+')
            return (0);
        if (base[i] <= 32 || base[i] > 126)
            return (0);
        j = i + 1;
        while (j < size)
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int    ft_baseid(char c, char *base, unsigned int size)
{
    unsigned int    idx;

    idx = 0;
    while (idx < size)
    {
        if (c == base[idx])
            return (idx);
        idx++;
    }
    return (idx);
}

int    ft_nb_in_dec_base(char *s, char *base, unsigned int size)
{
    unsigned int    i;
    unsigned int    idx;
    int                nb;

    nb = 0;
    i = 0;
    idx = ft_idxbase(str[i], base, size);
    while (idx < size && str[i])
    {
        nb = nb * size + idx;
        i++;
        idx = ft_idxbase(str[i], base, size);
    }
    return (nb);
}

int    ft_atoi_base(char *str, char *base)
{
    unsigned int    i;
    unsigned int    b_size;
    int                sign;
    int                nb;

    sign = 1;
    nb = 0;
    i = ft_count_wspace(str);
    b_size = 0;
    while (base[b_size])
        b_size++;
    if (!ft_check_base(base, b_size))
        return (0);
    while (str[i] == '-' || str[i] == '+')
    {    
        if (str[i] == '-')
            sign = -1 * sign;
        i++;
    }
    nb = ft_nbbasetodec(str + i, base, b_size);
    nb = sign * nb;
    return (nb);
}
