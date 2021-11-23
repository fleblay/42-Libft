/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:16:08 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/08 18:21:14 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	ft_fx(unsigned int i, char c)
{
	if (i % 2 == 0)
		return(ft_toupper(c));
	return (c);
}

int main(void)
{

	printf("ft_strmapi('abcdefghi', &ft_fx) : %s\n", ft_strmapi("abcdefghi", &ft_fx));

	return (0);
}
