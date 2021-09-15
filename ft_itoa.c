/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <mclerico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:30:49 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/15 22:03:26 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	cont;

	cont = 0;
	if (n < 0)
		cont++;
	else if (n == 0)
		cont++;
	while (n != 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	int		pos;
	char	*itoa;

	pos = ft_digits(n);
	itoa = (char *) malloc(pos + 1);
	if (!itoa)
		return (NULL);
	if (n < 0)
		itoa[0] = '-';
	else if (n == 0)
		itoa[0] = '0';
	itoa[pos--] = 0;
	while (n != 0)
	{
		if ((n % 10) > 0)
			itoa[pos--] = (n % 10) + 48;
		else
			itoa[pos--] = ((n % 10) * -1) + 48;
		n = n / 10;
	}
	return (itoa);
}
