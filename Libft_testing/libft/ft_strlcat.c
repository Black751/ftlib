/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:55:26 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 23:49:54 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char	*ft_strlcat(char *restrict dst, const char *restrict src, size_t s)
{
	size_t len_dst;
	size_t i;

	len_dst = ft_strlen(dst);
	i = 0;
	while (i < s - len_dst - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (dst);
}
