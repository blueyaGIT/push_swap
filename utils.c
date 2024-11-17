/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:25:04 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/17 17:44:34 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf/ft_printf.h"
#include "push_swap.h"

// Sorts stack `b` back into stack `a`
void	mechanical_turk_sort_b_to_a(t_stack *a, t_stack *b)
{
	while (b->top >= 0)
	{
		pa(a, b);
	}
}

void	mechanical_turk_sort(t_stack *a, t_stack *b)
{
	int	median;

	if (is_sorted(a))
		return ;
	median = find_median(a);
	partition(a, b, median);
	mechanical_turk_sort(a, b);
	mechanical_turk_sort_b_to_a(a, b);
}

// Sorts a stack with two elements
void	sort_two(t_stack *a)
{
	if (a->data[a->top] > a->data[a->top - 1])
		sa(a);
}

void	sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->data[a->top];
	second = a->data[a->top - 1];
	third = a->data[a->top - 2];
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

// Checks if the stack `a` is sorted in ascending order
int	is_sorted(t_stack *a)
{
	int	i;

	if (a->top < 0)
		return (1);
	i = a->top;
	while (i > 0)
	{
		if (a->data[i] > a->data[i - 1])
			return (0);
		i--;
	}
	return (1);
}
