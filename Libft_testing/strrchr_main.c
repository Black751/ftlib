/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:00:36 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 00:00:39 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	char *res;

	if (argc == 3)
	{
		res = ft_strrchr(argv[1], *argv[2]);
		if (res)
			printf("%s", res);
	}
	printf("\n");
	return (0);
}
