/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:34:42 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 17:43:31 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Swap the top two elements of stack
void	sx(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !((*stack)->next))
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

// Push the top element from stack to stack
void	px(t_stack **stack1, t_stack **stack2)
{
	t_stack	*temp;

	if (!*stack2)
		return ;
	temp = *stack1;
	*stack1 = *stack2;
	*stack2 = (*stack2)->next;
	(*stack1)->next = temp;
}

// Rotate stack upwards (first element becomes the last one)
void	rx(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	temp = *stack;
	*stack = lstlast_ps(*stack);
	(*stack)->next = temp;
	*stack = temp->next;
	temp->next = NULL;
}

// Reverse rotate stack (last element becomes the first one)
void	rrx(t_stack **stack)
{
	int		temp;
	t_stack	*temp2;

	if (!*stack || !(*stack)->next)
		return ;
	temp = 0;
	temp2 = *stack;
	while ((*stack)->next)
	{
		*stack = (*stack)->next;
		temp++;
	}
	(*stack)->next = temp2;
	while (temp > 1)
	{
		temp2 = temp2->next;
		temp--;
	}
	temp2->next = NULL;
}
