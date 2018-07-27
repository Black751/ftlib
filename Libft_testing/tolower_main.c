/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 19:14:24 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 19:16:56 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "main_header.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s", ft_tolower(argv[1]));
	}
	printf("\n");
	return (0);
}