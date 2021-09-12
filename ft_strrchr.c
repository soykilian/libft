#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_leng(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}


char    *ft_strrchr(const char *s, int c)
{
    size_t    len;

    len = ft_leng(s);
    while (len > 0 && s[len] != c)
        len--;
    if (s[len] != c)
        return (NULL);
    return ((char *)&s[len]);
}
