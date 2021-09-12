
#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t    i;
    size_t    j;
    size_t    res;

    i = ft_strlen(dst);
    res = ft_strlen(src);
    if (size <= i)
        res += size;
    else
        res += i;
    j = 0;
    while (src[j] != '\0' && i + 1 < size)
    {
        dst[i] = src[j];
        i += 1;
        j += 1;
    }
    dst[i] = '\0';
    return (res);
}
