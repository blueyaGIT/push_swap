/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:48:32 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/24 12:05:21 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target_position(t_stack *stack_b, long num)
{
	t_stack	*current;
	int		position;

	current = stack_b;
	if (current == NULL)
		return (0);
	position = 0;
	while (current != NULL)
	{
		if (current->nbr > num)
			return (position);
		position++;
		current = current->next;
	}
	return (position);
}

int	calculate_ra_steps(t_stack *stack_a, long num)
{
	int		steps;
	t_stack	*current;

	steps = 0;
	current = stack_a;
	while (current != NULL)
	{
		if (current->nbr == num)
			return (steps);
		current = current->next;
		steps++;
	}
	return (-1);
}

int	calculate_rra_steps(t_stack *stack_a, long num)
{
	int		steps;
	t_stack	*current;

	steps = 0;
	current = stack_a;
	while (current != NULL)
	{
		if (current->nbr == num)
			break ;
		current = current->prev;
		steps++;
	}
	return (steps);
}

int	calculate_rb_steps(t_stack *stack_b, int target_position)
{
	int		steps;
	t_stack	*current;

	steps = 0;
	current = stack_b;
	while (current != NULL)
	{
		if (current->index == target_position)
			break ;
		current = current->next;
		steps++;
	}
	return (steps);
}

int	calculate_rrb_steps(t_stack *stack_b, int target_position)
{
	int		steps;
	t_stack	*current;

	steps = 0;
	current = stack_b;
	while (current != NULL)
	{
		if (current->index == target_position)
			break ;
		current = current->prev;
		steps++;
	}
	return (steps);
}
