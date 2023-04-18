#include <unistd.h>

void	ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char alphbt;

    alphbt = 'a';
    while (alphbt <= 'z')
        ft_putchar(alphbt++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}