/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:21:18 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/04 16:30:39 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main (void)
{
	printf("ft_memchr('abcdefghiabc', f, 8) : %s || memchr('abcdefghiabc', f, 8) : %s\n"\
	, (char *)ft_memchr("abcdefghiabc", 'f', 8), (char *)memchr("abcdefghiabc", 'f', 8));
	printf("ft_memchr('abcdefghiabc', b, 5) : %s || memchr('abcdefghiabc', b, 5) : %s\n"\
	, (char *)ft_memchr("abcdefghiabc", 'b', 6), (char *)memchr("abcdefghiabc", 'b', 5));

	return (0);
}
