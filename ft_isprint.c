#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
