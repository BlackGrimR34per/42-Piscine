char    *ft_strupcase(char *str)
{
    int i = -1;

    while (str[++i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}