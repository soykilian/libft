/* ************************************************************************** */ /*                                                                            */ /*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:05:36 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/14 15:03:04 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nwords(char c, char const *s)
{
	int		fsep;
	int		cont;
	int		i;

	fsep = 0;
	i = 0;
	cont = 1;
	while (s[i] != 0)
	{	
		if (fsep == 0 && s[i] == c)
		{
			fsep = 1;
			cont++;
		}
		else if (s[i] != c)
			fsep = 0;
		i++;
	}
	if (s[ft_strlen(s) - 1] == c)
		cont--;
	return (cont);
}

int		f_len(char const *s, char c, int i)
{
	int	len;

	len = 1;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

void	ft_copy(int *i, char const *s, char c, char *p)
{
	int		l;

	l = 0;
	while (s[*i] && s[*i] != c)
	{
		p[l++] = s[*i];
		*i += 1;
	}
	p[l] = 0;
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	int		k;
	int		i;
	char	**p;

	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	nwords = ft_nwords(c, s);
	p = malloc((nwords + 1) * sizeof(char *));
	if (!p || nwords == 0)
		return (p);
	while (s[i] && nwords > k)
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			p[k] = (char *) malloc (f_len(s, c, i));
			if (!p[k])
			{
				free(p);
				return (NULL);
			}
			ft_copy(&i, s, c, p[k]);
			k++;
			if (k == nwords)
				break ;
		}
	}
	p[nwords] = 0;
	return (p);
}
