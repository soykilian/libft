#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;

	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (*s1c != *s2c)
			return (*s1c - *s2c);
		s1c++;
		s2c++;
		n--;
	}
	return (0);
}

