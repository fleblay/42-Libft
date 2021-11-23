/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:54:20 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/10 11:57:12 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_print(void *elem)
{
	printf("content vaut : %d\n", *((int *)elem));
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

	ft_lstiter(start, &ft_print);
	return (0);
}
