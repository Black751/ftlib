/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 12:18:20 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 12:32:23 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	*ft_memalloc(size_t size)
{
	void	*res;

	res = NULL;
	res = (void *)malloc(size);
	if (res)
	{
		ft_memset(res, 0, size);
	}
	return (res);
}
