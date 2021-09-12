#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_copystr(char *dest, char *src, unsigned int size)
{
	int		i;
	char	*dst;
	char	*s;

	i = 0;
	dst = (char *)dest;
	s = (char *)src;
	while (i++ < (int)size)
		*dst++ = *s++;
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;

	len = ft_strlen(src);
	if (len + 1 < size)
		ft_copystr(dest, src, len + 1);
	else if (size != 0)
	{
		ft_copystr(dest, src, size - 1);
		dest[size - 1] = 0;
	}
	return (len);
}
