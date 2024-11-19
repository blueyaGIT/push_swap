/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:15:18 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 13:22:34 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the top two elements of stack `a`
void	sa(t_stack *a)
{
	t_stack	*first;
	t_stack	*second;
	long	temp_nbr;
	long	temp_index;

	if (a != NULL && a->next != NULL)
	{
		first = a;
		second = a->next;
		temp_nbr = first->nbr;
		temp_index = first->index;
		first->nbr = second->nbr;
		first->index = second->index;
		second->nbr = temp_nbr;
		second->index = temp_index;
	}
}

// Swap the top two elements of stack `b`
void	sb(t_stack *b)
{
	t_stack	*first;
	t_stack	*second;
	long	temp_nbr;
	long	temp_index;

	if (b != NULL && b->next != NULL)
	{
		first = b;
		second = b->next;
		temp_nbr = first->nbr;
		temp_index = first->index;
		first->nbr = second->nbr;
		first->index = second->index;
		second->nbr = temp_nbr;
		second->index = temp_index;
	}
}

// Swap the top two elements of both stacks `a` and `b`
void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

// Push the top element from `b` to `a`
void	pa(t_stack *a, t_stack *b)
{
	t_stack	*top_b;

	if (b != NULL)
	{
		top_b = b;
		b = b->next;
		if (a != NULL)
		{
			top_b->next = a;
			a->prev = top_b;
		}
		a = top_b;
		a->prev = NULL;
	}
}

// Push the top element from stack `a` to stack `b`
void	pb(t_stack *a, t_stack *b)
{
	t_stack	*top_a;

	if (a != NULL)
	{
		top_a = a;
		a = a->next;
		if (b != NULL)
		{
			top_a->next = b;
			b->prev = top_a;
		}
		b = top_a;
		b->prev = NULL;
	}
}
