/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:56:55 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/08 11:09:19 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

int	main(void)
{
	printf("ft_strdup('toto') : %s || strdup('toto') : %s\n", \
	ft_strdup("toto"), strdup("toto"));

	assert(ft_strdup("")[0]	 == strdup("")[0]);
	printf("Asserting on empty string : OK\n"); 

	printf("Test ft_strdup done\n");

	return (0);
}
