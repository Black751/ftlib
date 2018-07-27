/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 19:51:13 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 19:51:20 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isdigit(*argv[1]))
			printf("True");
		else
			printf("False");
	}
	printf("\n");
	return (0);
}