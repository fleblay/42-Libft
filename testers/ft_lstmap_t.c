/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:54:55 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/10 15:03:15 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_print(void *elem)
{
	printf("content vaut : %d\n", *((int *)elem));
}

void	ft_del(void *elem)
{
	*((int *)elem) = 0;
}

void	*ft_x10(void *nb)
{
	*((int *)nb) *= 10;
	return (nb);
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

	data = 2;
	data2 = 4;
	data3 = 6;
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

	ft_lstiter(ft_lstmap(start, &ft_x10, &ft_del), &ft_print);
	return (0);
}
