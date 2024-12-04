/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:24:37 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 12:13:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t		temp;
	char		*dest;
	const char	*src;

	temp = -1;
	dest = (char *)dest_str;
	src = (const char *)src_str;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (++temp < n)
	{
		dest[temp] = src[temp];
	}
	return (dest_str);
}
