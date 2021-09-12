#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*sc;
	unsigned char		cc;
	int					i;

	sc = (unsigned char *)s;
	cc = c;
	i = 0;
	while (i < (int)n)
	{
		if (sc[i] == cc)
			return ((void *)(sc + i));
		i++;
	}
	return (NULL);
}
