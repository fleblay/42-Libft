/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:07:35 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/20 15:09:02 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("ft_isalnum('a') : %d || isalnum('a') : %d\n", ft_isalnum('a'), isalnum('a'));
	printf("ft_isalnum('B') : %d || isalnum('B') : %d\n", ft_isalnum('B'), isalnum('B'));
	printf("ft_isalnum('0') : %d || isalnum('0') : %d\n", ft_isalnum('0'), isalnum('0'));
	printf("ft_isalnum('9') : %d || isalnum('9') : %d\n", ft_isalnum('9'), isalnum('9'));
	printf("ft_isalnum('&') : %d || isalnum('&') : %d\n", ft_isalnum('&'), isalnum('&'));
	printf("ft_isalnum('\\n') : %d ||isalnum('\\n') : %d\n", ft_isalnum('\n'), isalnum('\n'));
	return (0);
}
