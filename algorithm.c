/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:44:35 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/24 12:05:11 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	min(int ra_steps, int rb_steps, int rra_steps, int rrb_steps)
{
	int	total_steps;

	total_steps = ra_steps + rb_steps;
	if (rra_steps + rrb_steps < total_steps)
		total_steps = rra_steps + rrb_steps;
	return (total_steps);
}

int	calculate_steps(t_stack *stack_a, t_stack *stack_b, int num)
{
	int	target_position;
	int	ra_steps;
	int	rra_steps;
	int	rb_steps;
	int	rrb_steps;

	target_position = find_target_position(stack_b, num);
	ra_steps = calculate_ra_steps(stack_a, num);
	rra_steps = calculate_rra_steps(stack_a, num);
	rb_steps = calculate_rb_steps(stack_b, target_position);
	rrb_steps = calculate_rrb_steps(stack_b, target_position);
	return (min(ra_steps, rb_steps, rra_steps, rrb_steps));
}

long	find_best_move(t_stack *stack_a, t_stack *stack_b)
{
	int		best_steps;
	long	best_num;
	t_stack	*current_a;
	long	num;

	best_steps = INT_MAX;
	best_num = -1;
	current_a = stack_a;
	while (current_a != NULL)
	{
		num = current_a->nbr;
		if (calculate_steps(stack_a, stack_b, num) < best_steps)
		{
			best_steps = calculate_steps(stack_a, stack_b, num);
			best_num = num;
		}
		current_a = current_a->next;
	}
	return (best_num);
}
