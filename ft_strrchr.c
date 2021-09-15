/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <mclerico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:06:35 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/15 21:14:08 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_leng(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_leng(s);
	while (len > 0 && s[len] != (char)c)
		len--;
	if (s[len] != (char)c)
		return (NULL);
	return ((char *)&s[len]);
}
