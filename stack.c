/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:15:18 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/07 11:03:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

// Swap the top two elements of stack `a`
void	sa(t_stack *a)
{
	int	temp;

	if (a->top > 0)
	{
		temp = a->data[a->top];
		a->data[a->top] = a->data[a->top - 1];
		a->data[a->top - 1] = temp;
	}
}

// Swap the top two elements of stack `b`
void	sb(t_stack *b)
{
	int	temp;

	if (b->top > 0)
	{
		temp = b->data[b->top];
		b->data[b->top] = b->data[b->top - 1];
		b->data[b->top - 1] = temp;
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
	if (b->top >= 0)
	{
		a->top++;
		a->data[a->top] = b->data[b->top];
		b->top--;
	}
}

// Push the top element from `a` to `b`
void	pb(t_stack *a, t_stack *b)
{
	if (a->top >= 0)
	{
		b->top++;
		b->data[b->top] = a->data[a->top];
		a->top--;
	}
}
