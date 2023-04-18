#include <unistd.h>

void    ft_print(int x, int y);
void    ft_putchar(char c);

void    ft_print_comb2(void)
{
    int x;
    int y;

    x = -1;
    while (++x <= 98)
    {
        y = x;
        while (++y <= 99)
        {
            ft_print(x, y);
        }
    }
}

void    ft_print(int x, int y)
{
    ft_putchar(x / 10 + 48);
    ft_putchar(x % 10 + 48);
    ft_putchar(' ');
    ft_putchar(y / 10 + 48);
    ft_putchar(y % 10 + 48);

    if (x != 98)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}