/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:15:18 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/24 13:21:44 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the top two elements of stack `a`
void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	if (*a && (*a)->next)
	{
		first = *a;
		second = (*a)->next;
		first->next = second->next;
		if (second->next)
			second->next->prev = first;
		second->prev = NULL;
		second->next = first;
		first->prev = second;
		*a = second;
	}
}

// Swap the top two elements of stack `b`
void	sb(t_stack **b)
{
	sa(b);
}

// Swap the top two elements of both stacks `a` and `b`
void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}

// Push the top element from stack `b` to stack `a`
void	pa(t_stack **a, t_stack **b)
{
	t_stack	*top_b;

	if (*b)
	{
		top_b = *b;
		*b = (*b)->next;
		if (*b)
			(*b)->prev = NULL;
		top_b->next = *a;
		if (*a)
			(*a)->prev = top_b;
		*a = top_b;
		top_b->prev = NULL;
	}
}

// Push the top element from stack `a` to stack `b`
void	pb(t_stack **a, t_stack **b)
{
	pa(b, a);
}
