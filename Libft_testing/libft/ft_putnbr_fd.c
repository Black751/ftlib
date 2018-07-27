/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:22:04 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 10:45:44 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int digit;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		digit = -(nb % 10);
		if (nb < -9)
			ft_putnbr_fd(-(nb / 10), fd);
	}
	else
	{
		digit = nb % 10;
		if (nb > 9)
			ft_putnbr_fd(nb / 10, fd);
	}
	ft_putchar_fd(digit + '0', fd);
}
