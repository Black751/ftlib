/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:09:00 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 00:26:24 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	const char *str_backup;
	const char *to_find_backup;

	str_backup = str;
	to_find_backup = to_find;
	while (*str)
	{
		str_backup = str;
		to_find = to_find_backup;
		while (*str == *to_find && *str)
		{
			str++;
			to_find++;
		}
		if (!*to_find)
			return ((char *)str_backup);
		str = str_backup + 1;
	}
	return (0);
}
