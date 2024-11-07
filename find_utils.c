/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:44:46 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/07 11:03:21 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

// Find minimum element in stack `a`
int	find_min(t_stack *a)
{
	int	min;
	int	temp;

	temp = -1;
	min = a->data[0];
	while (++temp <= a->top)
		if (a->data[temp] < min)
			min = a->data[temp];
	return (min);
}

// Find second minimum element in stack `a`
int	find_second_min(t_stack *a)
{
	int	min;
	int	second_min;
	int	temp;

	temp = -1;
	min = find_min(a);
	second_min = __INT_MAX__;
	while (++temp <= a->top)
		if (a->data[temp] != min && a->data[temp] < second_min)
			second_min = a->data[temp];
	return (second_min);
}
