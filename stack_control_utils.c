/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:34:42 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 14:41:04 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the top two elements of stack
void	sx(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		second = (*stack)->next;
		first->next = second->next;
		if (second->next)
			second->next->prev = first;
		second->prev = NULL;
		second->next = first;
		first->prev = second;
		*stack = second;
	}
}

// Push the top element from stack to stack
void	px(t_stack **stack1, t_stack **stack2)
{
	t_stack	*top_stack_2;

	if (*stack2)
	{
		top_stack_2 = *stack2;
		*stack2 = (*stack2)->next;
		if (*stack2)
			(*stack2)->prev = NULL;
		top_stack_2->next = *stack1;
		if (*stack1)
			(*stack1)->prev = top_stack_2;
		*stack1 = top_stack_2;
		top_stack_2->prev = NULL;
	}
}

// Rotate stack upwards (first element becomes the last one)
void	rx(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = first;
		first->prev = last;
		first->next = NULL;
	}
}

// Reverse rotate stack (last element becomes the first one)
void	rrx(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second_last;

	if (*stack && (*stack)->next)
	{
		last = *stack;
		while (last->next)
			last = last->next;
		second_last = last->prev;
		second_last->next = NULL;
		last->prev = NULL;
		last->next = *stack;
		(*stack)->prev = last;
		*stack = last;
	}
}
