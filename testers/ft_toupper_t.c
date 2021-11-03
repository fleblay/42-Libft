/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:14:38 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/03 14:33:44 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("ft_toupper('a') : %c || toupper('a') : %c\n", ft_toupper('a'), toupper('a'));
	printf("ft_toupper('B') : %c || toupper('B') : %c\n", ft_toupper('B'), toupper('B'));
	printf("ft_toupper('0') : %c || toupper('0') : %c\n", ft_toupper('0'), toupper('0'));
	printf("ft_toupper('9') : %c || toupper('9') : %c\n", ft_toupper('9'), toupper('9'));
	printf("ft_toupper('&') : %c || toupper('&') : %c\n", ft_toupper('&'), toupper('&'));
	printf("ft_toupper('-100') : %d || toupper('100') : %d\n", ft_toupper(-100), toupper(-100));
	return (0);
}
