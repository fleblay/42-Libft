/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_t.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:00:49 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/09 16:08:11 by fle-blay         ###   ########.fr       */
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
	newelem = ft_lstnew(&data);
	start = newelem;
	newelem2 = ft_lstnew(&data2);
	ft_lstadd_front(&start, newelem2);

	printf("content vaut : %d\n", *((int *)(start->content)));

	return (0);
}
