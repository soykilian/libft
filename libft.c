#include <stdio.h>
#include <stdlib.h>

void *ft_memset(void *str, int c, size_t n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);

}

void ft_bzero (void *s, size_t n)
{
		
}

int main()
{

}


