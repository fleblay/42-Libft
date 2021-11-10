/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:58:27 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/10 13:09:47 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newstart;

	if (! (*f))
		return (lst);
	if (! lst)
		return (NULL);
	newlst = ft_lstnew((*f)(lst->content));
	if (! newlst)
		return (NULL);
	newlst->next = lst->next;
	newstart = newlst;
	lst = lst->next;
	while (lst->next)
	{
		newlst->next = ft_lstnew((*f)(lst->content));
		if (! newlst)
		{
			ft_lstclear(&newstart, del);
			return (NULL);
		}
		newlst = newlst->next;
		newlst->next = lst->next;
		lst = lst->next;
	}
	return (newstart);
}
