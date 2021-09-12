#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		l1;
	int		l2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	l1 = (int)ft_strlen(s1);
	l2 = (int)ft_strlen(s2);
	i = 0;
	join = malloc((l1 + l2 + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[i - l1])
	{
		join[i] = s2[i - l1];
		i++;
	}
	join[i] = 0;
	return(join);
}
