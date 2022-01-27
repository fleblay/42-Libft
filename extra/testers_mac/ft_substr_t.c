/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:54:42 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/08 11:59:37 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int main (void)
{
	int	i;

	i = 0;

	while (i < 11)
	{
		printf("ft_substr('abcdefghi', %d, 15) : %s\n", i, ft_substr("abcdefghi", i, 15));
		i++;
	}
	i = 0;

	while (i < 11)
	{
		printf("ft_substr('abcdefghi', 3, %d) : %s\n", i, ft_substr("abcdefghi", 3, i));
		i++;
	}

	return (0);
}
