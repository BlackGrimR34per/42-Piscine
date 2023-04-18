#include <unistd.h>

void    ft_putchar(char c);

void    ft_print_numbers(void)
{
    int nb;

    nb = 0;
    while (nb < 10)
        ft_putchar(nb++ + 48);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}