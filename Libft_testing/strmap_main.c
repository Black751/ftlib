/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:35:33 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 14:41:52 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

char	function(char c)
{
	return (c + 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strmap(argv[1], function));
	return (0);
}
