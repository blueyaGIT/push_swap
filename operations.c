/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:35:21 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 11:42:49 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Initialize a stack
t_stack	*init_stack(t_stack	*stack, int size)
{
	stack = malloc(sizeof(t_stack));
	stack->data = malloc(sizeof(int) * size);
	stack->top = -1;
	stack->size = size;
	return (stack);
}

// Push to stack
void	push(t_stack *stack, int value)
{
	if (stack->top < stack->size - 1)
	{
		stack->data[++stack->top] = value;
	}
}

// Pop from stack
int	pop(t_stack *stack)
{
	if (stack->top >= 0)
	{
		return (stack->data[stack->top--]);
	}
	return (-1);
}

// Find smallest
int	findSmallest(t_stack *stack)
{
	int	min;

	min = stack->data[0];
	for (int i = 1; i <= stack->top; i++)
	{
		if (stack->data[i] < min)
			min = stack->data[i];
	}
	return (min);
}

// Find largest
int	findLargest(t_stack *stack)
{
	int	max;

	max = stack->data[0];
	for (int i = 1; i <= stack->top; i++)
	{
		if (stack->data[i] > max)
			max = stack->data[i];
	}
	return (max);
}

int	main(void)
{
	t_stack *stack_a = initStack(42);
	t_stack *stack_b = initStack(42);

	// Initialize stack_a with example values
	for (int i = 42; i > 0; i--)
		push(stack_a, i);

	// Push first two elements to stack_b
	push(stack_b, pop(stack_a));
	push(stack_b, pop(stack_a));

	int smallest = findSmallest(stack_b);
	int largest = findLargest(stack_b);

	// Further algorithm implementation...

	return (0);
}