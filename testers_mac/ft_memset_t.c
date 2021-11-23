/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:36:57 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/29 11:09:18 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main (void)
{
	char	str1[] = "0123456789";
	char	str2[] = "0123456789";

	printf("str1 : %s\n", str1);
	printf("ft_memset('0123456789', a, 3) : %s || memset('0123456789', a, 3) : %s\n",\
	(char *) ft_memset(str1, 'a', 3), (char *) memset(str2, 'a', 3));

	return (0);
}
