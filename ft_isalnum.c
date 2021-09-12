#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
