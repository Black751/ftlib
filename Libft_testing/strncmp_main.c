/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 18:49:20 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 09:05:54 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "main_header.h"

int		main(int argc, char **argv)
{
	int n;
	if (argc == 4)
	{
		n = ft_atoi(argv[3]);
		if (n < 0)
			printf("N must be positive");
		else
			printf("%d", ft_strncmp(argv[1], argv[2], (size_t)n));
	}
	printf("\n");
}
