/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:52:29 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/19 14:12:44 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("ft_isalpha('a') : %d || isalpha('a') : %d\n", ft_isalpha('a'), isalpha('a'));
	printf("ft_isalpha('B') : %d || isalpha('B') : %d\n", ft_isalpha('B'), isalpha('B'));
	printf("ft_isalpha('0') : %d || isalpha('0') : %d\n", ft_isalpha('0'), isalpha('0'));
	printf("ft_isalpha('9') : %d || isalpha('9') : %d\n", ft_isalpha('9'), isalpha('9'));
	printf("ft_isalpha('&') : %d || isalpha('&') : %d\n", ft_isalpha('&'), isalpha('&'));
	printf("ft_isalpha('\\n') : %d || isalpha('\\n') : %d\n", ft_isalpha('\n'), isalpha('\n'));
	return (0);
}
