/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:13:39 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/04 15:25:42 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main (void)
{
	printf("ft_strrchr('abcdefghiabc', f) : %s || strrchr('abcdefghiabc', f) : %s\n"\
	, ft_strrchr("abcdefghiabc", 'f'), strrchr("abcdefghiabc", 'f'));
	printf("ft_strrchr('abcdefghiabc', b) : %s || strrchr('abcdefghiabc', b) : %s\n"\
	, ft_strrchr("abcdefghiabc", 'b'), strrchr("abcdefghiabc", 'b'));

	return (0);
}
