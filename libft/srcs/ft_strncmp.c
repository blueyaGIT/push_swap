/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:39:19 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 12:13:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	temp;

	temp = 0;
	while ((s1[temp] != '\0' || s2[temp] != '\0' ) && temp < n)
	{
		if ((unsigned char)s1[temp] != (unsigned char)s2[temp])
			return ((unsigned char)s1[temp] - (unsigned char)s2[temp]);
		temp++;
	}
	return (0);
}
