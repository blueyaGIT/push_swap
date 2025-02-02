/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:20:50 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/02 18:41:00 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calculate_steps(t_stack *a, int num)
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
