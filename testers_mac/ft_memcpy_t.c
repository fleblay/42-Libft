/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:11:20 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/03 18:00:59 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main (void)
{
	char	src[] = "abcdefghij";
	char	dest1[] = "0123456789___";
	char	dest2[] = "0123456789___";

	printf("src : %s\n", src);
	printf("dest1 : %s\n", dest1);
	printf("dest2 : %s\n", dest2);

	printf("Applying ft_memcpy(dest1, src, 3) and memcpy(dest2, src, 3)\n");
	ft_memcpy(dest1, src, 3);
	memcpy(dest2, src, 3);

	printf("dest1 by ft_memcpy : %s\n", dest1);
	printf("dest2 by memcpy : %s\n", dest2);

	return (0);
}
