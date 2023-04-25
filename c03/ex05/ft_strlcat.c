unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int count = 0;
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] && i < size)
        i++;

    while (src[j])
        j++;

    count = i;
    while (size != 0 && i < size - 1)
        dest[i++] = *src++;

    if (i < size)
        dest[i] = '\0';

    return (count + j);
}