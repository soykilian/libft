/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariavictoria <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:29:24 by mariavict         #+#    #+#             */
/*   Updated: 2021/09/15 19:17:02 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*res;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	aux = ft_lstnew((*f)(lst->content));
	if (!aux)
		return (NULL);
	res = aux;
	lst = lst->next;
	while (lst->next)
	{
		aux->next = ft_lstnew((*f)(lst->content));
		if (!(aux->next))
		{
			ft_lstclear(&lst, del);
			free(aux);
			return (NULL);
		}
		lst = lst->next;
		aux = aux->next;
	}
	aux->next = NULL;
	return (res);
}
