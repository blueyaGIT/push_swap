/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:14:25 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 17:13:08 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*temp;

	if (!stack)
		return ;
	while (stack != NULL)
	{
		temp = stack;
		temp->nbr = 0;
		stack = stack->next;
		free(temp);
	}
}

void	ft_push(t_stack **stack, long value, int index)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
	{
		ft_printf("Memory allocation failed!\n");
		exit(EXIT_FAILURE);
	}
	new_node->nbr = value;
	new_node->index = index;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}

void	init_stack(t_stack **stack)
{
	*stack = NULL;
}

void	rotate_stack(t_stack *stack, int steps, long best,
		t_stack_definer which)
{
	t_stack_definer	direction;
	int				temp;

	temp = 0;
	direction = direction_x(calculate_rx_steps(stack, best),
			calculate_rrx_steps(stack, best));
	if (which == e_a)
	{
		while (direction == up && temp++ < steps)
			ra(&stack);
		while (direction == down && temp++ < steps)
			rra(&stack);
	}
	else if (which == e_b)
	{
		while (direction == up && temp++ < steps)
			rb(&stack);
		while (direction == down && temp++ < steps)
			rrb(&stack);
	}
	else
		exit(EXIT_FAILURE);
}
