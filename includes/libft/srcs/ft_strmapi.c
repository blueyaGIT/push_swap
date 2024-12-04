/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:22:12 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 12:13:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_strlen_special(const char *str)
{
	int		str_length_da;

	str_length_da = 0;
	while (str[str_length_da] != '\0')
	{
		str_length_da++;
	}
	return (str_length_da);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*memory;

	i = -1;
	if (s == NULL || f == NULL)
		return (NULL);
	memory = malloc((ft_strlen_special(s) + 1) * sizeof(char));
	if (!memory)
		return (NULL);
	while (s[++i])
		memory[i] = (*f)(i, s[i]);
	memory[i] = '\0';
	return (memory);
}

// static char	modify_char(unsigned int i, char c)
// {
// 	i = 32;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - i);
// 	return (c);
// }
