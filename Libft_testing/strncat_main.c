/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:24:39 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 22:37:55 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	char *new;
	int len;

	if (argc == 4)
	{
		len = (size_t) ft_atoi(argv[3]);
		new = (char *)malloc(ft_strlen(argv[1]) + len + 1);
		ft_strcpy(new, argv[1]);
		ft_strncat(new, argv[2], len);
		printf("%s", new);
	}
	printf("\n");
	return (0);
}
