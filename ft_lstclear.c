/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariavictoria <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:59:33 by mariavict         #+#    #+#             */
/*   Updated: 2021/09/15 12:22:47 by mariavict        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	if (lst)
	{
		while (*lst)
		{
			(*del)((*lst)->content);
			//ft_lstdelone(*lst,del);
			aux = (*lst)->next;
			*lst = aux;
		}
	}
}
