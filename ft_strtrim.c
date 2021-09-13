/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:10:31 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/13 13:13:09 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		return (NULL);
	return (ft_copytrim(s1, res, len, i));
}
