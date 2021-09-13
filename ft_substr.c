/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:28:07 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/13 13:35:46 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char				*sub;
	unsigned int		i;
	unsigned int		size;

	if (!str)
		return (NULL);
	size = ft_strlen(str + start);
	if (size + start > len)
		size = len;
	if (start >= ft_strlen(str))
		size = 0;
	sub = malloc((size + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (str[i + start] && i < size)
	{
		sub[i] = str[i + start];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
