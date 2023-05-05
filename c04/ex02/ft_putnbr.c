#include <unistd.h>

void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
    long n = nb;

    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }

    if (n >= 10)
    {
        ft_putnbr(n / 10);
        n %= 10;
    }
    
    if (n >= 0 && n < 10)
        ft_putchar(n + 48);   
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}