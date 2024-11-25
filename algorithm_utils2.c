/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:20:50 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 15:44:25 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_steps_b(t_stack *b, int num)
{
	long	target_position;
	int		total_steps_b;

	target_position = find_target_position(b, num);
	total_steps_b = min_steps(calculate_rx_steps(b, target_position),
			calculate_rrx_steps(b, target_position));
	return (total_steps_b);
}

int	calculate_steps_a(t_stack *a, int num)
{
	int	total_steps_a;

	total_steps_a = min_steps(calculate_rx_steps(a, num),
			calculate_rrx_steps(a, num));
	return (total_steps_a);
}

t_stack_definer	direction_x(int rx_steps, int rrx_steps)
{
	if (rx_steps == rrx_steps)
		return (up);
	else if (rx_steps < rrx_steps)
		return (up);
	else if (rx_steps > rrx_steps)
		return (down);
	else
		exit(EXIT_FAILURE);
}

int	min_steps(int rx_steps, int rrx_steps)
{
	if (rx_steps == rrx_steps)
		return (rx_steps);
	else if (rx_steps < rrx_steps)
		return (rx_steps);
	else if (rx_steps > rrx_steps)
		return (rrx_steps);
	else
		return (-1);
}
