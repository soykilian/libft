/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mclerico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:42:30 by mclerico          #+#    #+#             */
/*   Updated: 2021/09/14 18:06:22 by mclerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first;
	t_list *aux;

	if (lst)
		aux = *lst;
		first = aux;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		*lst = first;
	else 
		*lst = new;
}
