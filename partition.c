/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:35:48 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/17 17:39:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Partitions stack `a` into stack `b` based on the median
void	partition(t_stack *a, t_stack *b, int median)
{
	while (a->top >= 0)
	{
		if (a->data[a->top] <= median)
			pa(a, b);
		else
			ra(a);
	}
}
