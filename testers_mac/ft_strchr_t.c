/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:13:31 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/04 15:25:42 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main (void)
{
	printf("ft_strchr('abcdefghiabc', f) : %s || strchr('abcdefghiabc', f) : %s\n"\
	, ft_strchr("abcdefghiabc", 'f'), strchr("abcdefghiabc", 'f'));
	printf("ft_strchr('abcdefghiabc', b) : %s || strchr('abcdefghiabc', b) : %s\n"\
	, ft_strchr("abcdefghiabc", 'b'), strchr("abcdefghiabc", 'b'));

	return (0);
}
