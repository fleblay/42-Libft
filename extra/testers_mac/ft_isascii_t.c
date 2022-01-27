/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:37:58 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/20 15:41:21 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("ft_isascii('a') : %d || isascii('a') : %d\n", ft_isascii('a'), isascii('a'));
	printf("ft_isascii('B') : %d || isascii('B') : %d\n", ft_isascii('B'), isascii('B'));
	printf("ft_isascii('0') : %d || isascii('0') : %d\n", ft_isascii('0'), isascii('0'));
	printf("ft_isascii('9') : %d || isascii('9') : %d\n", ft_isascii('9'), isascii('9'));
	printf("ft_isascii('&') : %d || isascii('&') : %d\n", ft_isascii('&'), isascii('&'));
	printf("ft_isascii('132') : %d ||isascii('132') : %d\n", ft_isascii(132), isascii(132));
	printf("ft_isascii('\\n') : %d ||isascii('\\n') : %d\n", ft_isascii('\n'), isascii('\n'));
	return (0);
}
