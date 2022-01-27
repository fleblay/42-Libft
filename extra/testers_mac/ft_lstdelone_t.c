/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_t.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:48:53 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/10 11:39:46 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_del(void *elem)
{
	*((int *)elem) = 0;
}

int main(void)
{
	t_list	*newelem;
	int		data;

	data = 12;
	newelem = NULL;

	newelem = ft_lstnew(&data);
	printf("content vaut : %d\n", *((int *)(newelem->content)));
	
	printf("Deleting elem\n");
	ft_lstdelone(newelem, &ft_del);
	printf("Trying to access content from original elem : SHOULD CRASH !\n");
	printf("content vaut : %d\n", *((int *)(newelem->content)));

	printf("fin des tests lstdelone.c : SHOULD NOT BE DISPLAYED\n");
	return (0);
}
