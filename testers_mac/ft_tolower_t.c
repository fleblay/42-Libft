/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:16:22 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/03 14:33:51 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("ft_tolower('a') : %c || tolower('a') : %c\n", ft_tolower('a'), tolower('a'));
	printf("ft_tolower('B') : %c || tolower('B') : %c\n", ft_tolower('B'), tolower('B'));
	printf("ft_tolower('0') : %c || tolower('0') : %c\n", ft_tolower('0'), tolower('0'));
	printf("ft_tolower('9') : %c || tolower('9') : %c\n", ft_tolower('9'), tolower('9'));
	printf("ft_tolower('&') : %c || tolower('&') : %c\n", ft_tolower('&'), tolower('&'));
	printf("ft_tolower('-100') : %d || tolower('100') : %d\n", ft_tolower(-100), tolower(-100));
	return (0);
}
