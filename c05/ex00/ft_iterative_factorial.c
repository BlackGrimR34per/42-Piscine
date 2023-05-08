int ft_iterative_factorial(int nb)
{
    int result = 1;

    while (nb != 0)
        result *= nb--;
    return (result);
}