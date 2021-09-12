#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
