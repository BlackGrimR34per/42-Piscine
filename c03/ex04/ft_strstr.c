char    *ft_strstr(char *str, char *to_find)
{
    int i = -1;
    int j = -1;

    if (!(*to_find))
        return (str);

    while (str[++i])
    {
        j = 0;
        while (to_find[++j])
        {
            if (str[i + j] != to_find[j])
                break;
            else if (to_find[j + 1] == '\0')
                return (&str[i]);           
        }
    }
    return (0);
}