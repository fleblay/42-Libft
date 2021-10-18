/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:52:29 by fle-blay          #+#    #+#             */
/*   Updated: 2021/10/18 18:20:07 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	printf("ft_isalpha('a') : %d || isalpha('a') : %d\n", ft_isalpha('a'), isalpha('a'));
	return (0);
}
