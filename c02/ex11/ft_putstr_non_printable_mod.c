#include <unistd.h>

// Made it shorter and specific to the input cases as values can only range from 0 - 31 || 127

void    hex_converter(char c);

void    ft_putstr_non_printable(char *str)
{
    int count = 0;

    while (*str)
    {
        if ((*str >= 0 && *str <= 31) || *str == 127)
            hex_converter(*str);
        else
            write(1, str, 1);
        str++;
    }
}

void    hex_converter(char c)
{
    int nb = c;
    char div;
    char mod;
    char mapping[] = "0123456789abcdef";

    write(1, "\\", 1);

    if (nb > 15)
    {
        div = mapping[nb / 16];
        mod = mapping[nb % 16];

        write(1, &div, 1);
        write(1, &mod, 1);  
    }
    
    else
    {
        write(1, "0", 1);
        write(1, &mapping[nb], 1); 
    }          
}