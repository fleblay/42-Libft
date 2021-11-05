/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:01:38 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/05 12:48:53 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main (void)
{
	printf("ft_memcmp('abcd', 'abcd', 4) : %d || memcmp('abcd', 'abcd', 4) : %d\n"\
	, ft_memcmp("abcd", "abcd", 4), memcmp("abcd", "abcd", 4));

	printf("ft_memcmp('abcd', 'abcd', 8) : %d || memcmp('abcd', 'abcd', 8) : %d\n"\
	, ft_memcmp("abcd", "abcd", 8), memcmp("abcd", "abcd", 8));

	printf("ft_memcmp('abcde', 'abcdf', 4) : %d || memcmp('abcde', 'abcdf', 4) : %d\n"\
	, ft_memcmp("abcde", "abcdf", 4), memcmp("abcde", "abcdf", 4));

	printf("ft_memcmp('abcde', 'abcdf', 5) : %d || memcmp('abcde', 'abcdf', 5) : %d\n"\
	, ft_memcmp("abcde", "abcdf", 5), memcmp("abcde", "abcdf", 5));

	printf("ft_memcmp('abcde', 'abcdu', 5) : %d || memcmp('abcde', 'abcdu', 5) : %d\n"\
	, ft_memcmp("abcde", "abcdu", 5), memcmp("abcde", "abcdu", 5));

	printf("ft_memcmp('\\200', '\\0', 5) : %d || memcmp('\\200', '\\0', 5) : %d\n"\
	, ft_memcmp("\200", "\0", 5), memcmp("\200", "\0", 5));

	printf("ft_memcmp('abcd\\0e', 'abcd\\0u', 6) : %d || memcmp('abcd\\0e', 'abcd\\0u', 6) : %d\n"\
	, ft_memcmp("abcd\0e", "abcd\0u", 6), memcmp("abcd\0e", "abcd\0u", 6));

	return (0);
}
