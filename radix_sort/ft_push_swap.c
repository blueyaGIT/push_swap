/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:50 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/06 19:25:12 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

#include <stdio.h>

// Reverse rotate both stacks `a` and `b`
void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}

// Helper to find the max number of bits required
static int	max_bits(t_stack *a)
{
	int	max;
	int	bits;
	int	temp;

	max = a->data[0];
	bits = 0;
	temp = -1;
	while (++temp <= a->top)
		if (a->data[temp] > max)
			max = a->data[temp];
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

// Radix sort using stacks a and b
void	radix_sort(t_stack *a, t_stack *b)
{
	int	total_bits;
	int	size;
	int	bit;
	int	temp;
	int	num;

	total_bits = max_bits(a);
	size = a->top + 1;
	bit = -1;
	while (++bit < total_bits)
	{
		// Partition based on the current bit position
		temp = -1;
		while (++temp < size)
		{
			num = a->data[a->top];
			if (((num >> bit) & 1) == 0)
				pb(a, b); // Push to b if current bit is 0
			else
				ra(a); // Rotate in a if current bit is 1
		}
		// Move all elements back from b to a
		while (b->top >= 0)
			pa(a, b);
	}
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	// Initialize stack `a` with input data here
	// Initialize stack `b` to be empty

	// Start radix sort
	radix_sort(&a, &b);
	return (0);
}
