#include <unistd.h>

void    ft_putchar(char c);
void    ft_print(int x, int y, int z);

void    ft_print_comb(void)
{
    int x;
    int y;
    int z;

    x = -1;
    while (++x <= 7)
    {
        y = x;
        while (++y <= 8)
        {
            z = y;
            while (++z <= 9)
                ft_print(x, y, z);
        }
    }
}

void    ft_print(int x, int y, int z)
{
    ft_putchar(x + 48);
    ft_putchar(y + 48);
    ft_putchar(z + 48);

    if (x != 7)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}