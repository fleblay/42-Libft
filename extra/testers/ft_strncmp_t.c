/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:51:32 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/05 12:37:49 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main (void)
{
	printf("ft_strncmp('abcd', 'abcd', 4) : %d || strncmp('abcd', 'abcd', 4) : %d\n"\
	, ft_strncmp("abcd", "abcd", 4), strncmp("abcd", "abcd", 4));

	printf("ft_strncmp('abcd', 'abcd', 8) : %d || strncmp('abcd', 'abcd', 8) : %d\n"\
	, ft_strncmp("abcd", "abcd", 8), strncmp("abcd", "abcd", 8));

	printf("ft_strncmp('abcde', 'abcdf', 4) : %d || strncmp('abcde', 'abcdf', 4) : %d\n"\
	, ft_strncmp("abcde", "abcdf", 4), strncmp("abcde", "abcdf", 4));

	printf("ft_strncmp('abcde', 'abcdf', 5) : %d || strncmp('abcde', 'abcdf', 5) : %d\n"\
	, ft_strncmp("abcde", "abcdf", 5), strncmp("abcde", "abcdf", 5));

	printf("ft_strncmp('abcde', 'abcdu', 5) : %d || strncmp('abcde', 'abcdu', 5) : %d\n"\
	, ft_strncmp("abcde", "abcdu", 5), strncmp("abcde", "abcdu", 5));

	printf("ft_strncmp('\\200', '\\0', 5) : %d || strncmp('\\200', '\\0', 5) : %d\n"\
	, ft_strncmp("\200", "\0", 5), strncmp("\200", "\0", 5));

	return (0);
}
