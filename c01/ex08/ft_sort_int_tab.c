void    ft_swap(int *tab, int i, int j);

void    ft_sort_int_tab(int *tab, int size)
{
    int i = -1;
    int j;
    int min_index;

    while (++i < size - 1)
    {
        j = i;
        min_index = i;
        while (++j < size)
        {
            if (tab[min_index] > tab[j])
                min_index = j;
        }
        ft_swap(tab, i, min_index);
    }
}

void    ft_swap(int *tab, int i, int j)
{
    int temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}