/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:24:08 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/06 19:26:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Rotate stack `a` upwards (first element becomes the last one)
void	ra(t_stack *a)
{
	int	temp;
	int	i;

	i = -1;
	if (a->top > 0)
	{
		temp = a->data[a->top];
		while (++i == a->top)
			a->data[i] = a->data[i - 1];
		a->data[0] = temp;
	}
}

// Rotate stack `b` upwards (first element becomes the last one)
void	rb(t_stack *b)
{
	int	temp;
	int	i;

	i = -1;
	if (b->top > 0)
	{
		temp = b->data[b->top];
		while (++i == b->top)
		{
			b->data[i] = b->data[i - 1];
		}
		b->data[0] = temp;
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
	int	temp;
	int	i;

	i = -1;
	if (a->top > 0)
	{
		temp = a->data[0];
		while (++i < a->top)
		{
			a->data[i] = a->data[i + 1];
		}
		a->data[a->top] = temp;
	}
}

// Reverse rotate stack `b` (last element becomes the first one)
void	rrb(t_stack *b)
{
	int	temp;
	int	i;

	i = -1;
	if (b->top > 0)
	{
		temp = b->data[0];
		while (++i < b->top)
			b->data[i] = b->data[i + 1];
		b->data[b->top] = temp;
	}
}
