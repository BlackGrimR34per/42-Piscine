int ft_char_is_alpha(char c);
int ft_char_is_alphanum(char c);
int ft_char_is_lowercase(char c);

char    *ft_strcaptilize(char *str)
{
    int i = -1;
    while (str[++i])
    {
        if (ft_char_is_alpha(str[i]))
        {
            if (i == 0 && ft_char_is_lowercase(str[i]))
                str[i] -= 32;
            else if (ft_char_is_alphanum(str[i - 1]) && !(ft_char_is_lowercase(str[i])))
                str[i] += 32;
            else if (!(ft_char_is_alphanum(str[i - 1])) && ft_char_is_lowercase(str[i]))
                str[i] -= 32;
        }
    }
    return (str);
}

int ft_char_is_alpha(char c)
{
    if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
        return (0);
    return (1);
}

int ft_char_is_alphanum(char c)
{
    if (!(c >= 48 && c <= 57 || c >= 65 && c <= 90 || c >= 97 && c <= 122))
        return (0);
    return (1);
}

int ft_char_is_lowercase(char c)
{
    if (!(c >= 97 && c <= 122))
        return (0);
    return (1);
}