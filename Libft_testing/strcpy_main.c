/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:17:51 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 21:23:01 by ybenkira         ###   ########.fr       */
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
		dst = (char *)malloc(sizeof(char) * (len + 1));
		ft_strcpy(dst, argv[1]);
		printf("%s", dst);
	}
	return (0);
}
