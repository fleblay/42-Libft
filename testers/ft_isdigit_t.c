/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:14:43 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/19 14:36:25 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("ft_isdigit('a') : %d || isdigit('a') : %d\n", ft_isdigit('a'), isdigit('a'));
	printf("ft_isdigit('B') : %d || isdigit('B') : %d\n", ft_isdigit('B'), isdigit('B'));
	printf("ft_isdigit('0') : %d || isdigit('0') : %d\n", ft_isdigit('0'), isdigit('0'));
	printf("ft_isdigit('9') : %d || isdigit('9') : %d\n", ft_isdigit('9'), isdigit('9'));
	printf("ft_isdigit('&') : %d || isdigit('&') : %d\n", ft_isdigit('&'), isdigit('&'));
	printf("ft_isdigit('\\n') : %d ||isdigit('\\n') : %d\n", ft_isdigit('\n'),isdigit('\n'));
	return (0);
}
