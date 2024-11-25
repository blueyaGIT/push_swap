/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:48:32 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 14:50:37 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	find_target_position(t_stack *stack_b, long num)
{
	t_stack	*current;
	long	position;

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

int	calculate_rx_steps(t_stack *stack, long num)
{
	int		steps;
	t_stack	*current;

	steps = 0;
	current = stack;
	while (current != NULL)
	{
		if (current->nbr == num)
			return (steps);
		current = current->next;
		steps++;
	}
	return (steps);
}

int	calculate_rrx_steps(t_stack *stack, long num)
{
	int		steps;
	t_stack	*current;

	steps = 0;
	current = stack;
	while (current != NULL)
	{
		if (current->nbr == num)
			break ;
		current = current->prev;
		steps++;
	}
	return (steps);
}
