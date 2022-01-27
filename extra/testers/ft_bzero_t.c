/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_t.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:31:29 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/03 09:49:59 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

int main (void)
{
	char	str1[] = "0123456789";
	char	str2[] = "0123456789";
	int		i;

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	printf("Applying ft_bzero(str1, 3) and bzero(str2, 3)\n");
	ft_bzero(str1, 3);
	bzero(str2, 3);

	i = 0;
	while (i < 10)
	{
		printf("str1[%d]: %d || str2[%d]: %d\n",i, str1[i], i, str2[i]);
		i++;
	}

	return (0);
}
