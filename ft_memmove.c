#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destc;
	unsigned char		*srcc;
	int					i;

	destc = (unsigned char *)(dest);
	srcc = (unsigned char *)(src);
	i = (int) n;
	if (dest == src || !n)
		return (dest);
	if (src < dest)
	{
		while (i-- > 0)
			destc[i] = srcc[i];
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			destc[i] = srcc[i];
			i++;
		}
	}
	return (dest);
}
