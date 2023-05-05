#include <unistd.h>

int check_base(char *base, int count);
void ft_putchar(char c);

void    ft_putnbr_base(int nbr, char *base)
{
    int count = 0;
    long nb = nbr;

    while (base[count])
        count++;

    if (count <= 1 || !check_base(base, count))
        return ;

    if (nbr < 0)
    {
        ft_putchar('-');
        nb = -nbr;
    }

    if (nb >= count)
    {
        ft_putnbr_base(nb / count, base);
        nb %= count;
    }
    
    if (nb >= 0 && nb < count)
        ft_putchar(base[nb]);   
}

int check_base(char *base, int count)
{   
    int i = -1;
    int j;

    while (base[++i])
    {
        if (base[i] == 43 || base[i] == 45)
            return (0);
    }

    i = -1;
    while (++i < count - 1)
    {
        j = i;
        while (base[++j])
        {
            if (base[i] == base[j])
                return (0);
        }
    }
    return (1);   
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}