/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:24:08 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/24 13:21:54 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Rotate stack `a` upwards (first element becomes the last one)
void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	if (*a && (*a)->next)
	{
		first = *a;
		*a = (*a)->next;
		(*a)->prev = NULL;
		last = *a;
		while (last->next)
			last = last->next;
		last->next = first;
		first->prev = last;
		first->next = NULL;
	}
}

// Rotate stack `b` upwards
void	rb(t_stack **b)
{
	ra(b);
}

// Rotate both stacks `a` and `b` upwards
void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
}

// Reverse rotate stack `a` (last element becomes the first one)
void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*second_last;

	if (*a && (*a)->next)
	{
		last = *a;
		while (last->next)
			last = last->next;
		second_last = last->prev;
		second_last->next = NULL;
		last->prev = NULL;
		last->next = *a;
		(*a)->prev = last;
		*a = last;
	}
}

// Reverse rotate stack `b`
void	rrb(t_stack **b)
{
	rra(b);
}
