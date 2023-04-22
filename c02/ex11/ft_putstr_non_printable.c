void    hex_converter(char c);

void    ft_putstr_non_printable(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str < 32 || *str == 127)
            hex_converter(*str);
        else
            write(1, str, 1);
        str++;
    }
}

void    hex_converter(char c)
{
    int nb = c;
    int count = 0;
    int i;
    char output[2];
    char mapping[] = "0123456789abcdef";

    while (nb)
    {
        count++;
        nb /= 16;
    }

    if (count == 1)
        count++;

    i = count;
    nb = c;
    while (i--)
    {
        output[i] = mapping[nb % 16];
        nb /= 16;
    }

    write(1, "\\", 1);
    i = 0;
    while (i < count)
        write(1, &output[i++], 1);

}