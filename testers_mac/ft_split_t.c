/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_t.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:28:51 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/08 15:40:34 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "stdio.h"

int main (void)
{
	char	**tab;
	int		i;

	i = 0;
	tab = NULL;
	printf("  asdf sdfsd fsdaf  sdf dsaf \n");
	tab = ft_split("  asdf sdfsd fsdaf  sdf dsaf ",' ');
	while (tab[i])
	{
		printf("tab[%d]: %s\n",i , tab[i]);
		i++;
	}
	printf("tab[%d]: %s\n",i , tab[i]);

	return (0);
}
