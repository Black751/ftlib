/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequ_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:52:04 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 14:52:11 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (ft_strequ(argv[1], argv[2]))
			printf("Same");
		else
			printf("Differents");
	}
	printf("\n");
}

