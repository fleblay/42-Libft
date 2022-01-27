/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_t.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:33:23 by fle-blay          #+#    #+#             */
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
	t_list	*newelem2;
	t_list	*newelem3;
	t_list	*start;
	int		data;
	int		data2;
	int		data3;

	data = 12;
	data2 = 120;
	data3 = 444;
	newelem = NULL;
	newelem2 = NULL;
	newelem3 = NULL;
	start = NULL;

	newelem = ft_lstnew(&data);
	newelem2 = ft_lstnew(&data2);
	newelem3 = ft_lstnew(&data3);

	ft_lstadd_back(&start, newelem);
	ft_lstadd_back(&start, newelem2);
	ft_lstadd_back(&start, newelem3);
	printf("last content vaut : %d\n", *((int *)(ft_lstlast(start)->content)));
	
	printf("Deleting whole list\n");
	ft_lstclear(&start, &ft_del);
	printf("Trying to access content from last elem : SHOULD CRASH !\n");
	printf("last content vaut : %d\n", *((int *)(ft_lstlast(start)->content)));

	printf("fin des tests lstdelone.c : SHOULD NOT BE DISPLAYED\n");
	return (0);
}
