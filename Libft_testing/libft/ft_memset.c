/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 09:50:37 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 09:58:16 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*current;
	size_t			i;

	current = b;
	i = 0;
	while (i < len)
	{
		*current = (unsigned char)c;
		current++;
		i++;
	}
	return (b);
}
