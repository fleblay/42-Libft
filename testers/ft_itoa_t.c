/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_t.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:26:33 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/08 17:17:31 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main (void)
{
	printf("ft_itoa('12345') : %s\n\n\n", ft_itoa(12345));
	printf("ft_itoa('-12345') : %s\n\n\n", ft_itoa(-12345));
	printf("ft_itoa('0') : %s\n\n\n", ft_itoa(0));
	printf("ft_itoa('-2147483648') : %s\n\n\n", ft_itoa(-2147483648));
	printf("ft_itoa('2147483647') : %s\n\n\n", ft_itoa(2147483647));
	printf("ft_itoa('2147483648') : %s\n\n\n", ft_itoa(2147483648));

	return (0);
}
