/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:14:38 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/29 10:19:11 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("ft_toupper('a') : %d || toupper('a') : %d\n", ft_toupper('a'), toupper('a'));
	printf("ft_toupper('B') : %d || toupper('B') : %d\n", ft_toupper('B'), toupper('B'));
	printf("ft_toupper('0') : %d || toupper('0') : %d\n", ft_toupper('0'), toupper('0'));
	printf("ft_toupper('9') : %d || toupper('9') : %d\n", ft_toupper('9'), toupper('9'));
	printf("ft_toupper('&') : %d || toupper('&') : %d\n", ft_toupper('&'), toupper('&'));
	return (0);
}
