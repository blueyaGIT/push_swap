/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:39:38 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 12:13:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*new;

	if (start > ft_strlen(s))
	{
		len = 0;
		start = 0;
	}
	while ((*s != '\0') && (start-- > 0))
		s++;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	new = substr;
	while ((*s != '\0') && (len > 0))
	{
		*new++ = *s++;
		len--;
	}
	*new = '\0';
	return (substr);
}
