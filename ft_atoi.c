#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_isspace(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		cont;
	int		a;

	i = 0;
	cont = 0;
	a = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			cont = 1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		a = (a * 10 + (str[i] - 48));
		i++;
	}
	if (cont != 0)
		a = a * -1;
	return (a);
}
