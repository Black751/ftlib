/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:18:37 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 00:18:43 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	char *res;

	if (argc == 3)
	{
		res = ft_strstr(argv[1], argv[2]);
		if (res)
			printf("%s", res);
	}
	printf("\n");
	return (0);
}
