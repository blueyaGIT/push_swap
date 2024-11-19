/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:57:41 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 11:37:03 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup_gnl(const char *s1)
{
	size_t	len;
	size_t	temp;
	char	*copy;

	if (!s1)
		return (NULL);
	temp = 0;
	len = ft_strlen_gnl(s1);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	while (temp < len)
	{
		copy[temp] = s1[temp];
		temp++;
	}
	copy[len] = '\0';
	return (copy);
}

char	*ft_strjoin_gnl(char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	temp1;
	size_t	temp2;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen_gnl(s1);
	len2 = ft_strlen_gnl(s2);
	temp1 = -1;
	temp2 = -1;
	joined = (char *)malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	while (++temp1 < len1)
		joined[temp1] = s1[temp1];
	while (++temp2 < len2)
		joined[len1 + temp2] = s2[temp2];
	joined[len1 + len2] = '\0';
	return (joined);
}

char	*ft_strndup_gnl(const char *s, size_t n)
{
	size_t	temp;
	size_t	len;
	char	*copy;

	if (!s || !n)
		return (NULL);
	len = ft_strlen_gnl(s);
	if (n > len)
		n = len;
	copy = (char *)malloc(n + 1);
	if (!copy)
		return (NULL);
	temp = 0;
	while (temp < n)
	{
		copy[temp] = s[temp];
		temp++;
	}
	copy[temp] = '\0';
	return (copy);
}
