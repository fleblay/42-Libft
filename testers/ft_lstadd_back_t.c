/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_t.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:40:37 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/09 19:37:34 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list	*newelem;
	t_list	*newelem2;
	t_list	*start;
	int		data;
	int		data2;


	data = 12;
	data2 = 24;
	newelem = NULL;
	newelem2 = NULL;
	start = NULL;

	newelem = ft_lstnew(&data);
	newelem2 = ft_lstnew(&data2);

	printf("Testing on adding an elem on empty list\n");
	ft_lstadd_back(&start, newelem);
	printf("content premier vaut : %d\n", *((int *)(start->content)));

	printf("Testing on adding a new elem to the list\n");
	ft_lstadd_back(&start, newelem2);
	printf("content premier vaut : %d\n", *((int *)(start->content)));
	printf("content last vaut : %d\n", *((int *)(ft_lstlast(start)->content)));

	return (0);
}
