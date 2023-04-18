#include <unistd.h>

void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
    int n;
    int count;
    int index;
    char out_arr[10];

    if (nb == 0)
    {
        ft_putchar(nb + 48);
        return ;
    }

    else if (nb < 0)
    {
        if (nb == -2147483648)
        {
            write(1, "-2147483648", 11);
            return ;
        }

        ft_putchar('-');
         nb *= -1;   
    }

    n = nb;
    count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }

    index = --count;
    while (nb)
    {
        out_arr[index--] = (nb % 10) + 48;
        nb /= 10;
    }

    index = 0;
    while (index <= count)
        ft_putchar(out_arr[index++]);

}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}