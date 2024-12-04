/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:33:54 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 12:13:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *str)
{
	int		str_length_da;

	str_length_da = 0;
	while (str[str_length_da] != '\0')
	{
		str_length_da++;
	}
	return (str_length_da);
}
