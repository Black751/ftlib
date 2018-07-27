/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 15:09:10 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 15:09:12 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	char *res;

	if (argc == 4)
	{
		res = ft_strsub(argv[1], (unsigned) ft_atoi(argv[2]), (size_t)ft_atoi(argv[3]));
		if (res)
			printf("%s", res);
	}
	printf("\n");
	return (0);
}
