/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:16:22 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/29 10:19:20 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("ft_tolower('a') : %d || tolower('a') : %d\n", ft_tolower('a'), tolower('a'));
	printf("ft_tolower('B') : %d || tolower('B') : %d\n", ft_tolower('B'), tolower('B'));
	printf("ft_tolower('0') : %d || tolower('0') : %d\n", ft_tolower('0'), tolower('0'));
	printf("ft_tolower('9') : %d || tolower('9') : %d\n", ft_tolower('9'), tolower('9'));
	printf("ft_tolower('&') : %d || tolower('&') : %d\n", ft_tolower('&'), tolower('&'));
	return (0);
}
