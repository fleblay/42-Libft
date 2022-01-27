/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:29:01 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/09 18:35:10 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	data2 = 24;
	data2 = 48;
	newelem = NULL;
	newelem2 = NULL;
	newelem3 = NULL;
	start = NULL;

	newelem = ft_lstnew(&data);
	newelem2 = ft_lstnew(&data2);
	newelem3 = ft_lstnew(&data3);

	ft_lstadd_front(&start, newelem);
	ft_lstadd_front(&start, newelem2);
	ft_lstadd_front(&start, newelem3);

	printf("content vaut : %d\n", *((int *)(ft_lstlast(start)->content)));

	return (0);
}
