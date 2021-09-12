#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char	*srcc;
	unsigned char	*destc;
	int				i;

	srcc = (unsigned char *) src;
	destc = (unsigned char *) dest;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < (int)n)
	{
		destc[i] = srcc[i];
		i++;
	}
	return ((void *)destc);
}
