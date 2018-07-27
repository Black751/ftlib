/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 01:38:18 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 01:52:53 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	unsigned char *memory;
	size_t len;

	if (argc == 4)
	{
		len = ft_atoi(argv[3]);
		memory = (unsigned char *)malloc(sizeof(unsigned char) * len);
		ft_memset(memory, ft_atoi(argv[2]), len);
		while(len > 0)
		{
			printf("%c", *memory);
			memory++;
			len--;
		}
	}
	printf("\n");
	return (0);
}
