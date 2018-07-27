/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 01:19:00 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 01:19:02 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	char *res;
	if (argc == 2)
	{
		res = ft_strdup(argv[1]);
		printf("%s", res);
	}
	printf("\n");
	return (0);
}
