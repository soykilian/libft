/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:25:49 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/13 13:25:51 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*destc;
	unsigned char	*srcc;
	int				i;
	unsigned char	cc;

	i = 0;
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	cc = (unsigned char) c;
	if (!dest && !src)
		return (dest);
	while (i < (int)n)
	{
		destc[i] = srcc[i];
		i++;
		if (srcc[i] == cc)
		{
			destc[i] = cc;
			return ((void *)(destc + i + 1));
		}
	}
	return (NULL);
}
