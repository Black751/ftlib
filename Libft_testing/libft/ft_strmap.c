/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:31:01 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 14:42:03 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t			len;
	unsigned int	i;
	char			*res;

	len = ft_strlen(s);
	res = ft_strnew(len);
	i = 0;
	if (res)
	{
		while (i < len)
		{
			res[i] = f(s[i]);
			i++;
		}
	}
	return (res);
}
