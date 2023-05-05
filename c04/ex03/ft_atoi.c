int ft_atoi(char *str)
{
    int sign = 1;
    int nb = 0;

    while (*str >= 9 && *str <= 13 || *str == 32)
        str++;
    
    while (*str == 43 || *str == 45)
    {
        if (*str == 45)
            sign *= -1;
        str++;
    }

    while (*str >= 48 && *str <= 57)
        nb = nb * 10 + (*str++ - 48);

    return (nb);
}

#include <stdio.h>

int main()
{
    char *str = "   ---+--+2147483648ab567";
    printf("%d", ft_atoi(str));
    return (0);
}