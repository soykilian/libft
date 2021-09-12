#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s)
		s++;
	if (*s == 0 && c != 0)
		return(0);
	return ((char *) s);
}
