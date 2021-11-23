/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:12:20 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/03 12:32:12 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main (void)
{
	char	src1[] = "abcdefghij";
	char	src2[] = "abcdefghij";
	char	src3[] = "abcdefghij";
	char	src4[] = "abcdefghij";

	printf("src1 : %s\n", src1);
	printf("src2 : %s\n", src2);

	printf("Applying ft_memmove(src1+2, src1, 4) and memmove(src2+2, src2, 4)\n");
	ft_memmove(src1+2, src1, 4);
	memmove(src2+2, src2, 4);

	printf("src1 by ft_memmove : %s\n", src1);
	printf("src2 by memmove : %s\n", src2);

	/*
	int i;

	i = 0;
	while (i < 10)
	{
		printf("src1[%d]: %c || src2[%d]: %c\n",i, src1[i], i, src2[i]);
		i++;
	}*/

	printf("src3 : %s\n", src3);
	printf("src4 : %s\n", src4);

	printf("Applying ft_memmove(src3, src3+2, 4) and memmove(src4, src4+2, 4)\n");
	ft_memmove(src3, src3+2, 4);
	memmove(src4, src4+2, 4);

	printf("src3 by ft_memmove : %s\n", src3);
	printf("src4 by memmove : %s\n", src4);

	/*
	i = 0;
	while (i < 10)
	{
		printf("src3[%d]: %c || src4[%d]: %c\n",i, src3[i], i, src4[i]);
		i++;
	}*/
	return (0);
}
