/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <mclerico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:29:24 by mariavict         #+#    #+#             */
/*   Updated: 2021/09/15 21:58:26 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*res;
	t_list	*aux;

	if (!lst || !f)
		return (NULL);
	aux = ft_lstnew((*f)(lst->content));
	if (!aux)
		return (NULL);
	res = aux;
	lst = lst->next;
	while (lst)
	{
		aux->next = ft_lstnew((*f)(lst->content));
		if (!(aux->next))
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		lst = lst->next;
		aux = aux->next;
	}
	aux->next = NULL;
	return (res);
}
