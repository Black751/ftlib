/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:54:33 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 16:59:48 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}
	printf("\n");
	return (0);
}