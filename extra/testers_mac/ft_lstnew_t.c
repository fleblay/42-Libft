/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:23:30 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/09 15:30:38 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list	*newelem;
	int		data;


	data = 12;
	newelem = NULL;
	newelem = ft_lstnew(&data);

	printf("content vaut : %d\n", *((int *)(newelem->content)));

	return (0);
}
