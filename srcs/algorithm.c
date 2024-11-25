/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:44:35 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 17:10:51 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	find_best_move(t_stack *stack_a, t_stack *stack_b)
{
	int		best_steps_a;
	int		best_steps_b;
	long	best_num;
	t_stack	*current_a;
	long	num;

	best_steps_a = INT_MAX;
	best_steps_b = INT_MAX;
	best_num = -1;
	current_a = stack_a;
	while (current_a != NULL)
	{
		num = current_a->nbr;
		if (calculate_steps_a(stack_a, num) < best_steps_a
			&& calculate_steps_b(stack_b, num) < best_steps_b)
		{
			best_steps_a = calculate_steps_a(stack_a, num);
			best_steps_b = calculate_steps_b(stack_b, num);
			best_num = num;
		}
		current_a = current_a->next;
	}
	return (best_num);
}
