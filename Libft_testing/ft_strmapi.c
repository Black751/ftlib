/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:44:20 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 14:44:52 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			res[i] = f(i, s[i]);
			i++;
		}
	}
	return (res);
}
