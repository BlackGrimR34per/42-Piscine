#include <unistd.h>

void    ft_putchar(char c);

void    ft_print_reverse_alphabet(void)
{
    char alphbt;

    alphbt = 'z';
    while (alphbt >= 'a')
        ft_putchar(alphbt--);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}