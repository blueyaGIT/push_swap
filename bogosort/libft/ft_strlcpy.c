/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:40:17 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/14 11:11:30 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	length;
	int				src_length;

	length = 0;
	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	while (length < size - 1 && src[length] != '\0')
	{
		dest[length] = src[length];
		length = length + 1;
	}
	dest[length] = '\0';
	return (src_length);
}
