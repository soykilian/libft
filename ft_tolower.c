#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
