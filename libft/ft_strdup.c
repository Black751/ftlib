/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 01:10:32 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 09:49:33 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*res;

	res = 0;
	len = ft_strlen(str);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res)
		ft_strcpy(res, str);
	return (res);
}
