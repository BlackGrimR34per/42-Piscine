char    *ft_strlowcase(char *str)
{
    int i = -1;

    while (str[++i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}