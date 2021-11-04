/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:11:37 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/04 11:58:58 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int main (void)
{
	char	buf1[15];
	char	buf2[15];
	long unsigned int	mine;
	long unsigned int	real;

	strcpy(buf1,"abcdefghij");
	strcpy(buf2,"abcdefghij");

	printf("Applying ft_strlcat(buf1,'toto',15) && strlcat(buf1,'toto',15)\n");
	mine = ft_strlcat(buf1,"toto",15);
	real = strlcat(buf2,"toto",15);

	printf("Return value of ft_strcat : %lu. buf1 : %s\n", mine, buf1); 
	printf("Return value of strcat : %lu. buf2 : %s\n", real, buf2);

	return (0);
}	
