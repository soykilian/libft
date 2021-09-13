/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:26:01 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/13 13:31:23 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*sc;
	unsigned char		cc;
	int					i;

	sc = (unsigned char *)s;
	cc = c;
	i = 0;
	while (i < (int)n)
	{
		if (sc[i] == cc)
			return ((void *)(sc + i));
		i++;
	}
	return (NULL);
}
