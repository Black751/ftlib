/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:11:58 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 00:03:17 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char *res;

	while (*str && *str != (char)c)
		str++;
	res = (*str == (char)c) ? (char *)str : 0;
	return (res);
}