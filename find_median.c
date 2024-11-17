/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:35:21 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/17 17:39:31 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_median_logic(t_stack *a, int *sorted)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i++ <= a->top)
		sorted[i] = a->data[i];
	i = 0;
	while (i++ < a->top)
	{
		j = 0;
		while (j++ < a->top - i)
		{
			if (sorted[j] > sorted[j + 1])
			{
				temp = sorted[j];
				sorted[j] = sorted[j + 1];
				sorted[j + 1] = temp;
			}
		}
	}
}

// Finds the median value in stack `a`
int	find_median(t_stack *a)
{
	int	*sorted;
	int	median;

	sorted = malloc((a->top + 1) * sizeof(int));
	if (!sorted)
	{
		ft_printf("Failed to allocate memory for median calculation\n");
		exit(1);
	}
	find_median_logic(a, sorted);
	median = sorted[(a->top + 1) / 2];
	return (free(sorted), median);
}
