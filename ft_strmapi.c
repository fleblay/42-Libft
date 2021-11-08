/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:42:15 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/08 17:58:45 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = NULL;
	new = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (! new)
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)(i, new[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
