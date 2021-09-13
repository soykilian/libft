/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:15:40 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/13 13:59:11 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;
	size_t	dlen;

	i = ft_strlen(dst);
	dlen = i;
	res = ft_strlen(src);
	if (size <= dlen)
		return (res + size);
	else
		res += dlen;
	j = 0;
	while (src[j] != '\0' && j + 1 < size - dlen)
	{
		dst[i] = src[j];
		i += 1;
		j += 1;
	}
	if (dlen + j < size)
		dst[i] = '\0';
	return (res);
}
