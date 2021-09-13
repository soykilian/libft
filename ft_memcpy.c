/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:26:28 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/13 13:47:53 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*srcc;
	unsigned char	*destc;
	int				i;

	srcc = (unsigned char *) src;
	destc = (unsigned char *) dest;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < (int)n)
	{
		destc[i] = srcc[i];
		i++;
	}
	return ((void *)destc);
}
