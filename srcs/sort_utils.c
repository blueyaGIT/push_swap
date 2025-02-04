/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:15:57 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 15:46:32 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_idx(t_stack *a, int nbr)
{
	int		count;

	count = 0;
	while (a->nbr != nbr)
	{
		count++;
		a = a->next;
	}
	a->idx = 0;
	return (count);
}

void	do_sort(t_stack *a)
{
	int		idx;
	t_stack	*b;

	b = NULL;
	if (lstsize_ps(&a) == 2)
		sa(&a);
	else
	{
		b = sort_b(a);
		a = sort_a(a, &b);
		idx = find_idx(a, min_ps(a));
		if (idx < lstsize_ps(a) - idx)
		{
			while ((a)->nbr != min_ps(a))
				ra(a);
		}
		else
		{
			while ((a)->nbr != min_ps(a))
				rra(a);
		}
	}
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
