/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:08:28 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 22:12:13 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	char *new;

	if (argc == 3)
	{
		new = (char *)malloc(ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1);
		ft_strcpy(new, argv[1]);
		ft_strcat(new, argv[2]);
		printf("%s", new);
	}
	printf("\n");
	return (0);
}
