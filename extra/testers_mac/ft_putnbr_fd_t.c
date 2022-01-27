/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_t.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <fle-blay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:08:47 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/23 15:20:23 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	ft_putnbr_fd(-5,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(5,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(12345,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(-12345,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(0,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(2147483647,1);
	ft_putchar_fd('\n',1);
	ft_putnbr_fd(-2147483648,1);
	ft_putchar_fd('\n',1);

	return (0);
}
