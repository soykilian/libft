#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*output;
	size_t	i;

	i = 0;
	output = (char *)malloc(nmemb *size);
	if (!output)
		return (output);
	while (i < (size * nmemb))
	{
		output[i] = 0;
		i++;
	}
	return ((void *)output);
}
