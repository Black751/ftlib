/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 12:30:36 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 14:27:48 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char	*ft_strnew(size_t size)
{
	char	*res;

	res = NULL;
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res)
		ft_memset(res, '\0', size + 1);
	return (res);
}
