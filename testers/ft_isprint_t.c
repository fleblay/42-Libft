/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:41:34 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/03 14:29:22 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("ft_isprint('a') : %d || isprint('a') : %d\n", ft_isprint('a'), isprint('a'));
	printf("ft_isprint('B') : %d || isprint('B') : %d\n", ft_isprint('B'), isprint('B'));
	printf("ft_isprint('0') : %d || isprint('0') : %d\n", ft_isprint('0'), isprint('0'));
	printf("ft_isprint('9') : %d || isprint('9') : %d\n", ft_isprint('9'), isprint('9'));
	printf("ft_isprint('&') : %d || isprint('&') : %d\n", ft_isprint('&'), isprint('&'));
	printf("ft_isprint('DEL') : %d || isprint('DEL : %d\n", ft_isprint(127), isprint(127));
	printf("ft_isprint('132') : %d ||isprint('132') : %d\n", ft_isprint(132), isprint(132));
	printf("ft_isprint('\\n') : %d ||isprint('\\n') : %d\n", ft_isprint('\n'), isprint('\n'));
	printf("ft_isprint('BEL') : %d ||isprint('BEL') : %d\n", ft_isprint('\x7'), isprint('\x7'));
	return (0);
}
