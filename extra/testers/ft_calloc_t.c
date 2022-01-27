/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:45:35 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/08 10:33:07 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>

int	main(void)
{
	assert (1 == 1);

	printf("Pointer address of ft_calloc(0,0) : %p || Pointer address of \
	calloc (0,0) : %p\n", ft_calloc(0,0), calloc(0,0));

	/*
	printf("Pointer address of ft_calloc(0,0) : %ld || Pointer address of \
	calloc (0,0) : %ld\n", (unsigned long int)ft_calloc(0,0), (unsigned long int)calloc(0,0));
	*/

	//printf("size of void * :%ld\n", sizeof(void *));
	//printf("size of void * :%ld\n", sizeof(unsigned long int));

	printf("Test ft_calloc TO BE DONE\n");


	return (0);
}
