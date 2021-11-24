/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:51:10 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/24 09:58:20 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>
#include "bsdmini.h"
#include <stdio.h>

int main (void)
{
	char	buf1[15];
	char	buf2[15];
	long unsigned int	mine;
	long unsigned int	real;
	long unsigned int	i;

	i = 0;
	while (i < 20)
	{

	strcpy(buf1,"abcdefghij");
	strcpy(buf2,"abcdefghij");

	printf("Applying ft_strcpy(buf1,'toto',%lu) && strcpy(buf1,'toto',%lu)\n", i, i);
	mine = ft_strlcpy(buf1,"toto",i);
	real = strlcpy(buf2,"toto",i);

	printf("Return value of ft_strlcpy : %lu. buf1 : %s\n", mine, buf1); 
	printf("Return value of strlcpy : %lu. buf2 : %s\n\n", real, buf2);

	ft_bzero(buf1,15);
	ft_bzero(buf2,15);

	i++;
	}

	return (0);
}	
