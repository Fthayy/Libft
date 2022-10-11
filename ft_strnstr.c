#include <stdio.h>

char    *strnstr(const char *haystack, const char *needle, size_t len)
{
    int    i;
    int    x;

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

int main()
{
const char a[] = "fatihaygeliyor";
const char b[] = "yge";
printf("%s",strnstr(a,b,9));
}