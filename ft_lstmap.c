/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariavictoria <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:29:24 by mariavict         #+#    #+#             */
/*   Updated: 2021/09/15 14:41:49 by mariavict        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*res;
	t_list	*aux;

	if (!res)
		return (NULL);
	while (lst)
	{
	 	if (!ft_lstnew(lst->content))
			ft_lstclear(&lst, del);
		else

}
