/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:41:14 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 12:13:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(char *src)
{
	int		count;
	char	*array;
	int		temp;

	count = 0;
	temp = 0;
	while (src[count] != '\0')
		count++;
	array = (char *)malloc((count + 1) * sizeof(char));
	if (array == NULL)
		return (0);
	while (temp <= count)
	{
		array[temp] = src[temp];
		temp++;
	}
	return (array);
}
