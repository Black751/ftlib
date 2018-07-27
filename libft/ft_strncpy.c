/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:25:16 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/25 21:26:10 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int itt;

	itt = 0;
	while (itt < n && src[itt])
	{
		if (src[itt])
			dest[itt] = src[itt];
		itt++;
	}
	while (itt < n)
	{
		dest[itt] = '\0';
		itt++;
	}
	return (dest);
}
