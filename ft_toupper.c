#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
