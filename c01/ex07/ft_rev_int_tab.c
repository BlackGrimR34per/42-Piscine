void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i = -1;

    while (++i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
    }
}