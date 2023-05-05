int ft_atoi_base(char *str, char *base)
{
    int count = 0;
    int sign = 1;
    int nb = 0;

    while (base[count])
        count++;

    if (count <= 1 || !check_base(base, count))
        return ;

    while (*str >= 9 && *str <= 13 || *str == 32)
        str++;
    
    while (*str == 43 || *str == 45)
    {
        if (*str == 45)
            sign *= -1;
        str++;
    }

    while (*str >= 48 && *str <= 57)
        nb = nb * count + (*str++ - 48);

    return (nb);
}

int check_base(char *base, int count)
{   
    int i = -1;
    int j;

    while (base[++i])
    {
        if (base[i] == 43 || base[i] == 45)
            return (0);
    }

    i = -1;
    while (++i < count - 1)
    {
        j = i;
        while (base[++j])
        {
            if (base[i] == base[j])
                return (0);
        }
    }
    return (1);   
}