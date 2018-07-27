/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 19:38:35 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 19:40:50 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isalpha(*argv[1]))
			printf("True");
		else
			printf("False");
	}
	printf("\n");
	return (0);
}
