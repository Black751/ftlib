/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 01:59:25 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 09:49:49 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *dst_current;
	unsigned char *src_current;

	dst_current = (unsigned char *)dst;
	src_current = (unsigned char *)src;
	while (n > 0)
	{
		*dst_current = *src_current;
		dst_current++;
		src_current++;
		n--;
	}
	return (dst);
}
