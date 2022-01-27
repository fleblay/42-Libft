/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:25:47 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/08 14:45:57 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int main (void)
{
	printf("ft_strtrim('   abc   ', ' ') : %sEOL\n", ft_strtrim("   abc   ", " "));
	printf("ft_strtrim('   abc abc  ', ' ') : %sEOL\n", ft_strtrim("   abc abc  ", " "));
	printf("ft_strtrim('iiabcuu', 'iu') : %sEOL\n", ft_strtrim("iiabcuu", "iu"));
	printf("ft_strtrim('abc   ', ' ') : %sEOL\n", ft_strtrim("abc   ", " "));
	printf("ft_strtrim('   abc   ', '') : %sEOL\n", ft_strtrim("   abc   ", ""));
	printf("ft_strtrim('', '') : %sEOL\n", ft_strtrim("", ""));

	return (0);
}
