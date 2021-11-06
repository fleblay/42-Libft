/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:06:35 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/06 11:28:51 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int main (void)
{
	printf("ft_strnstr('Foo Bar Baz', 'Bar', 20) : %s || strnstr('Foo Bar Baz', 'Bar', 20) : %s\n"\
	, ft_strnstr("Foo Bar Baz", "Bar", 20), strnstr("Foo Bar Baz", "Bar", 20));

	printf("ft_strnstr('Foo Bar Baz', 'Bar', 4) : %s || strnstr('Foo Bar Baz', 'Bar', 4) : %s\n"\
	, ft_strnstr("Foo Bar Baz", "Bar", 4), strnstr("Foo Bar Baz", "Bar", 4));

	printf("ft_strnstr('Foo Bar Baz', 'Bar', 0) : %s || strnstr('Foo Bar Baz', 'Bar', 0) : %s\n"\
	, ft_strnstr("Foo Bar Baz", "Bar", 0), strnstr("Foo Bar Baz", "Bar", 0));

	printf("ft_strnstr('Foo Bar Baz', '', 4) : %s || strnstr('Foo Bar Baz', '', 4) : %s\n"\
	, ft_strnstr("Foo Bar Baz", "", 4), strnstr("Foo Bar Baz", "", 4));

	printf("ft_strnstr('Foo Bar Baz', 'Bar', 7) : %s || strnstr('Foo Bar Baz', 'Bar', 7) : %s\n"\
	, ft_strnstr("Foo Bar Baz", "Bar", 7), strnstr("Foo Bar Baz", "Bar", 7));

	printf("ft_strnstr('Foo Bar Baz', 'Bar', 8) : %s || strnstr('Foo Bar Baz', 'Bar', 8) : %s\n"\
	, ft_strnstr("Foo Bar Baz", "Bar", 8), strnstr("Foo Bar Baz", "Bar", 8));

	printf("ft_strnstr('MZIRIBMZIRIBMZE123', 'MZIRIBMZE', 9) : %s || strnstr('MZIRIBMZIRIBMZE123', 'MZIRIBMZE', 9) : %s\n"\
	, ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9), strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));

	return (0);
}
