#include <stdio.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = -1;

    while (src[++i] && n)
    {
        dest[i] = src[i];
        n--;
    }
    while (n--)
        dest[i++] = '\0';
    return (dest);
}