/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:25:04 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 15:14:49 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sorts stack `b` back into stack `a`
void	mechanical_turk_sort_b_to_a(t_stack *a, t_stack *b)
{
	while (b != NULL)
		pa(&a, &b);
}

void	mechanical_turk_sort(t_stack *a, t_stack *b)
{
	int		a_steps;
	int		b_steps;
	long	best;

	while (is_sorted(a) != 1)
	{
		best = find_best_move(a, b);
		a_steps = calculate_steps_a(a, best);
		b_steps = calculate_steps_b(b, find_target_position(b, a->nbr));
		rotate_stack(a, a_steps, best, g_a);
		rotate_stack(b, b_steps, best, g_b);
	}
	mechanical_turk_sort_b_to_a(a, b);
	return ;
}

// Sorts a stack with two elements
void	sort_two(t_stack *a)
{
	if (a != NULL && a->next != NULL)
		if (a->nbr > a->next->nbr)
			sa(&a);
}

// Sorts a stack with three elements
void	sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->nbr;
	second = a->next->nbr;
	third = a->next->next->nbr;
	if (first > second && second < third && first < third)
		sa(&a);
	else if (first > second && second > third)
	{
		sa(&a);
		rra(&a);
	}
	else if (first > second && second < third && first > third)
		ra(&a);
	else if (first < second && second > third && first < third)
	{
		sa(&a);
		ra(&a);
	}
	else if (first < second && second > third && first > third)
		rra(&a);
}

// Checks if the stack `a` is sorted in ascending order
int	is_sorted(t_stack *a)
{
	if (a == NULL)
		return (1);
	while (a->next != NULL)
	{
		if (a->nbr > a->next->nbr)
			return (0);
		a = a->next;
	}
	return (1);
}
