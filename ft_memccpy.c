#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	unsigned char 	*destc;
	unsigned char 	*srcc;
	int				i;
	unsigned char	cc;

	i = 0;
	destc = (unsigned char*)dest;
	srcc = (unsigned char*)src;
	cc = (unsigned char) c;

	if (!dest && !src)
		return (dest);
	while (i < (int)n)
	{
		destc[i] = srcc[i];
		i++;
		if (srcc[i] == cc)
		{
			destc[i] = cc;
			return ((void *)(destc + i + 1));
		}
	}
	return (NULL);
}


