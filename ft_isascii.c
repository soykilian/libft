#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}
