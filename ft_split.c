#include "libft.h"

int		ft_nwords(char c, char const *s)
{
	int		fsep;
	int		cont;
	int		i;

	fsep = 0;
	i = 0;
	cont = 1;
	while (s[i] != 0)
	{	
		if(fsep == 0 && s[i] == c)
		{
			fsep = 1;
			cont++;
		}
		else if (s[i] != c )
			fsep = 0;
		i++;
	}
	if (s[ft_strlen(s) - 1] == c)
		cont--;
	return (cont);
}

char	*ft_copy(int *i, char const *s, char c, char *p)
{
	int		l;

	l = 0;
	while (s[*i] != c)
	{
		l++;
		*i+=1;
	}
	p = malloc(l + 1);
	if (!p)
		return(p);
	*i -= l;
	l = 0;
	while(s[*i] && s[*i] != c)
	{
		p[l++] = s[*i];
		*i += 1;
	}
	p[l] = 0;
	return (p);
}

void	ft_words(char const *s, char c, char **p, int n)
{
	int		fletter;
	int		i;
	int		k;

	i = 0;
	k = 0;
	fletter = -1;

	if (!*s)
		return;
	fletter = 1;
	while (s[i] && n > k)
	{
		while (s[i] != c)
		{
			*p = ft_copy(&i, s, c, *p);
			p++;
			k++;
			if (k == n)
				break;
		}
		
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**p;

	if (!s)
		return (NULL);
	while (*s == c && s)
		s++;
	nwords = ft_nwords(c,s);
	p = malloc((nwords + 1) * sizeof(char *));
	if (!p || nwords == 0)
		return (p);
	ft_words(s,c,p,nwords);
	p[nwords] = 0;
	return(p);
}
