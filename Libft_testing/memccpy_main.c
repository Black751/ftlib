/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 09:58:53 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 09:58:57 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	size_t len;
	unsigned char *dst;
	if (argc == 5)
	{
		len = (size_t)ft_atoi(argv[4]);
		dst = (unsigned char*)malloc(sizeof(unsigned char) * len);
		ft_bzero(dst, len);
		if (ft_memccpy(dst, argv[2], *argv[3], len) != NULL)
			printf("Stopped : ");
		else
			printf("Finished : ");
		while (len > 0)
		{
			printf("%c", *dst);
			dst++;
			len--;
		}
	}
	return (0);
}
