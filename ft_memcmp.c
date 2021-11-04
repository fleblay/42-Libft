/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:56:40 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/04 18:10:44 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	long unsigned int	i;

	i = 0;
	while (i < n && (((char *)s1)[i] || ((char *)s2)[i]))
	{
		if (((char *)s1)[i] > ((char *)s2)[i])
			return (1);
		if (((char *)s1)[i] < ((char *)s2)[i])
			return (-1);
		i++;
	}
	return (0);
}
