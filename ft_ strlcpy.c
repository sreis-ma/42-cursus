#include "libft.h"

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t    i;
    size_t    x;

    x = ft_strlen(src) + 1;
    i = 0;
    if (size != 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (x);
}

/* int    main(void)
{
    char    src[] = "this is a string.";
    char    dest[100];

    ft_strlcpy(dest, src, 100);
    printf("Dest: %s\n", dest);
    return (0);
} /*