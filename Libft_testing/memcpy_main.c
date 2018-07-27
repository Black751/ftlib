/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 09:19:39 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 09:41:26 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	size_t len;
	unsigned char *dst;
	if (argc == 4)
	{
		len = (size_t)ft_atoi(argv[3]);
		dst = (unsigned char*)malloc(sizeof(unsigned char) * len);
		ft_bzero(dst, len);
		ft_memcpy(dst, argv[2], len);
		while (len > 0)
		{
			printf("%c", *dst);
			dst++;
			len--;
		}
	}
	return (0);
}
