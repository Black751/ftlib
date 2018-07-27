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

void	ft_putnbr(int nb)
{
	int digit;

	if (nb < 0)
	{
		ft_putchar('-');
		digit = -(nb % 10);
		if (nb < -9)
			ft_putnbr(-(nb / 10));
	}
	else
	{
		digit = nb % 10;
		if (nb > 9)
			ft_putnbr(nb / 10);
	}
	ft_putchar(digit + '0');
}
