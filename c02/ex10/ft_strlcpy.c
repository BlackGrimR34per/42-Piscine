unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int count = 0;

    while (src[count])
        count++;

    if (size == 0)
        return (count);

    size -= 1;
    while (*src && size--)
        *dest++ = *src++;
    *dest = '\0';

    return (count);
}