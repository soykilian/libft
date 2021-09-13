/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:24:27 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/13 13:30:26 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*output;
	size_t	i;

	i = 0;
	output = (char *)malloc(nmemb * size);
	if (!output)
		return (output);
	while (i < (size * nmemb))
	{
		output[i] = 0;
		i++;
	}
	return ((void *)output);
}
