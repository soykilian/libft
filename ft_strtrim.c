#include "libft.h"
/*int	isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	reslen(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (s1[i] && isset(s1[i], set))
		i++;
	while (j < len && isset(s1[len - j - 1], set))
		j++;
	return (len - (j + i));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		len;
	char	*res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	start = 0;
	len = reslen(s1, set);
	if (len < 0)
		len = 0;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	while (s1[start] && isset(s1[start], set))
		start++;
	while (i < len)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
*/
int	check_needle(const char *set, char c)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_copytrim(char const *s1, char *res, int size, int index)
{
	int	i;

	i = 0;
	while (i < size)
	{
		res[i] = s1[i + index];
		i++;
	}
	res[size] = 0;
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*res;
	
	i = 0;
	j = 0;
	len = (int)ft_strlen(s1);
	while (s1[i] && check_needle(set, s1[i]))
			i++;
	while (j < len && check_needle(set, s1[len - 1 - j]))
		j++;
	
	len -= (j + i);
	if (len < 0)
		len = 0;
	res = (char *)malloc(len + 1);
	if (!res)
		return(NULL);
	return(ft_copytrim(s1, res, len, i));
}
