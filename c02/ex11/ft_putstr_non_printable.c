#include <unistd.h>

void    hex_converter(char c);
void	ft_putchar(char c);

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
    char mapping[] = "0123456789abcdef";

    ft_putchar('\\');

    ft_putchar(mapping[nb / 16]);
    ft_putchar(mapping[nb % 16]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}