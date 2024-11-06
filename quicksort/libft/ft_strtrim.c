/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:16:34 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/13 10:48:19 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy_const(char *dest, const char *src, unsigned int n)
{
	char			*ptr;
	unsigned int	i;

	ptr = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		*ptr++ = src[i];
		i++;
	}
	while (i < n)
	{
		*ptr++ = '\0';
		i++;
	}
	return (dest);
}

static int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*end;
	size_t		t_length;
	char		*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_is_in_set(*s1, set))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = s1 + ft_strlen(s1) - 1;
	while (end > s1 && ft_is_in_set(*end, set))
		end--;
	t_length = end - s1 + 1;
	trimmed = malloc(t_length + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_strncpy_const(trimmed, s1, t_length);
	trimmed[t_length] = '\0';
	return (trimmed);
}
