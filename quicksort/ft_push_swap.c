/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:50 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/06 18:34:13 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

#include <stdio.h>

void	quicksort_stack(t_stack *a, t_stack *b, int start, int end)
{
	int	pivot;
	int	left;
	int	right;

	pivot = find_median(a, start, end);
	left = start;
	right = end;
	if (end - start <= 2)
	{
		// Use direct sorting for small partitions
		if (a->data[start] > a->data[start + 1])
			sa(a);
		if (end - start == 2 && a->data[start + 1] > a->data[start + 2])
		{
			ra(a);
			sa(a);
			rra(a);
		}
		return ;
	}
	// Partitioning: use a pivot value to divide into two sections

	// Move elements to `b` based on the pivot
	while (left <= right)
	{
		if (a->data[a->top] < pivot)
			pb(a, b); // Push to `b` if less than pivot
		else
			ra(a); // Rotate in `a` to keep elements >= pivot in place
	}
	// Recursively apply to partitions
	quicksort_stack(a, b, start, left - 1);// Left side
	quicksort_stack(a, b, right + 1, end);// Right side

	// Merging sorted `b` back to `a`
	while (b->top >= 0)
		pa(a, b);// Move sorted elements back to `a`
	}

int main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	// Initialize stacks with input data here

	// Start the quicksort-like sorting algorithm
	quicksort_stack(&a, &b, 0, a.top);
	return (0);
}
