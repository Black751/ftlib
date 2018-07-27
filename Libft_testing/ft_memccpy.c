/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 09:47:09 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 10:46:21 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	unsigned char *dst_current;
	unsigned char *src_current;

	dst_current = (unsigned char *)d;
	src_current = (unsigned char *)s;
	while (n > 0)
	{
		*dst_current = *src_current;
		if (*src_current == (unsigned char)c)
			return (dst_current++);
		dst_current++;
		src_current++;
		n--;
	}
	return (NULL);
}
