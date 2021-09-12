#include "libft.h"
#include <stdio.h>
int	check_possible_needle(const char *p, const char *needle, int size, int i)
{
	int	f_size;
	int	j;
	int	index;

	j = 0;
	index = i;
	f_size = 0;
	while (p[i] == needle[j] && needle[j] && p[i] && j + index < size )
	{
		f_size++;
		j++;
		i++;
	}
	return (f_size);
}

char *ft_strnstr(const char	*str, const char *to_find, size_t len)
{
	int		i;
	int		size;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	size = (int) ft_strlen(to_find);
	while (str[i] != 0 && i <= (int)len)
	{
		if (str[i] == to_find[0])
		{
			if (check_possible_needle(str, to_find, len, i) == size)
				return ((char *)(str + i));
		}
		i++;
	}
	return (0);
}
