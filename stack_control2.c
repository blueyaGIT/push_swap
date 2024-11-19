/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:24:08 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 13:23:37 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Rotate stack `a` upwards (first element becomes the last one)
void	ra(t_stack *a)
{
	t_stack	*first;
	t_stack	*temp;

	if (a != NULL && a->next != NULL)
	{
		first = a;
		a = a->next;
		a->prev = NULL;
		temp = a;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = first;
		first->prev = temp;
		first->next = NULL;
	}
}

// Rotate stack `b` upwards (first element becomes the last one)
void	rb(t_stack *b)
{
	t_stack	*first;
	t_stack	*temp;

	if (b != NULL && b->next != NULL)
	{
		first = b;
		b = b->next;
		b->prev = NULL;
		temp = b;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = first;
		first->prev = temp;
		first->next = NULL;
	}
}

// Rotate both stacks `a` and `b` upwards
void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}

// Reverse rotate stack `a` (last element becomes the first one)
void	rra(t_stack *a)
{
	t_stack	*last;
	t_stack	*second_last;

	if (a != NULL && a->next != NULL)
	{
		last = a;
		while (last->next != NULL)
		{
			last = last->next;
		}
		second_last = last->prev;
		second_last->next = NULL;
		last->prev = NULL;
		last->next = a;
		a->prev = last;
		a = last;
	}
}

// Reverse rotate stack `b` (last element becomes the first one)
void	rrb(t_stack *b)
{
	t_stack	*last;
	t_stack	*second_last;

	if (b != NULL && b->next != NULL)
	{
		last = b;
		while (last->next != NULL)
		{
			last = last->next;
		}
		second_last = last->prev;
		second_last->next = NULL;
		last->prev = NULL;
		last->next = b;
		b->prev = last;
		b = last;
	}
}
