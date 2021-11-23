/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:00:42 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/28 16:10:37 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

int	main(void)
{
	printf("ft_strlen('a') : %ld || strlen('a') : %ld\n", ft_strlen("a"), strlen("a"));
	printf("ft_strlen('abcdef') : %ld || strlen('abcdef') : %ld\n", ft_strlen("abcdef"), strlen("abcdef"));
	printf("ft_strlen('') : %ld || strlen('') : %ld\n", ft_strlen(""), strlen(""));
	return (0);
}
