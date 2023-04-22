int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
            return (0);
        str++;
    }
    return (1);