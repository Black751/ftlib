/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:30:18 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 21:30:20 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	int len;
	char *dst;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		dst = (char *)malloc(sizeof(char) * (len + 5));
		ft_strncpy(dst, argv[1] , (unsigned) (len + 1));
		printf("%s", dst);
	}
	return (0);
}
