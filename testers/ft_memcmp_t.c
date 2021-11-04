/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:01:38 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/04 18:09:03 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main (void)
{
	printf("ft_memcmp('abcd', 'abcd', 5) : %d || memcmp('abcd', 'abcd', 5) : %d\n"\
	, ft_memcmp("abcd", "abcd", 5), memcmp("abcd", "abcd", 5));

	printf("ft_memcmp('abcde', 'abcdf', 4) : %d || memcmp('abcde', 'abcdf', 4) : %d\n"\
	, ft_memcmp("abcde", "abcdf", 4), memcmp("abcde", "abcdf", 4));

	printf("ft_memcmp('abcde', 'abcdf', 5) : %d || memcmp('abcde', 'abcdf', 5) : %d\n"\
	, ft_memcmp("abcde", "abcdf", 5), memcmp("abcde", "abcdf", 5));

	printf("ft_memcmp('abcde', 'abcdu', 5) : %d || memcmp('abcde', 'abcdu', 5) : %d\n"\
	, ft_memcmp("abcde", "abcdu", 5), memcmp("abcde", "abcdu", 5));

	printf("ft_memcmp('abcde', 'abcda', 5) : %d || memcmp('abcde', 'abcda', 5) : %d\n"\
	, ft_memcmp("abcde", "abcda", 5), memcmp("abcde", "abcda", 5));

	return (0);
}
