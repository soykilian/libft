/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <mclerico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:01:33 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/15 21:17:52 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nwords(char const *s, char c)
{
	int	fletter;
	int	i;
	int	count;

	fletter = -1;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (fletter == -1 && s[i] != c)
			fletter = i;
		else if (fletter != -1 && s[i] == c)
		{
			fletter = -1;
			count++;
		}
		i++;
	}
	if (fletter != -1)
		count++;
	return (count);
}

static char	*ft_copy(char const *s, char c, int *i)
{
	int		l;
	int		cont;
	char	*str;

	l = 0;
	cont = 0;
	while (s[(*i) + cont] && s[(*i) + cont] != c)
		cont++;
	str = (char *)malloc(cont + 1);
	if (!str)
		return (NULL);
	while (l < cont)
		str[l++] = s[(*i)++];
	str[l] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		k;
	int		n;

	if (!s)
		return (NULL);
	i = 0;
	n = 0;
	k = 0;
	n = ft_nwords(s, c);
	p = (char **)malloc ((n + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (s[i] && k < n)
	{
		if (s[i] != c)
			p[k++] = ft_copy(s, c, &i);
		else
			i++;
	}
	p[k] = NULL;
	return (p);
}
