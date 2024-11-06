/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:31:23 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/13 09:04:47 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		temp;
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	if (dest == source)
		return (dst);
	if (dest > source && dest < source + len)
	{
		temp = len;
		while (temp > 0)
		{
			temp--;
			dest[temp] = source[temp];
		}
	}
	else
	{
		temp = -1;
		while (++temp < len)
			dest[temp] = source[temp];
	}
	return (dst);
}
