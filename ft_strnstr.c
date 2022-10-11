#include <stdio.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t    i;
    size_t    x;

    i = 0;
    x = 0;
    if (needle [x] == '\0')
        return ((char *)haystack);
    while (haystack [i] != '\0' && i <= len)
    {
        x = 0;
        while (haystack [i] == needle [x] && haystack [i] != '\0' && i<=len)
        {
            x++;
            i++;
            if (needle[x] == '\0')
                return ((char *)haystack + i - x);
        }
        i++;
    }
    return (0);
}
