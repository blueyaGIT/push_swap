/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rotb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:48:32 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 15:45:30 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calc_ra_rb_a(t_stack *a, t_stack *b, long num)
{
	int	temp;
	int	idx;

	temp = find_spot_a(a, num);
	idx = find_idx(b, num);
	if (temp < idx)
		temp = idx;
	return (temp);
}

int	calc_ra_rrb_a(t_stack *a, t_stack *b, int num)
{
	int	temp;
	int	idx;

	temp = 0;
	idx = find_idx(b, num);
	if (idx)
		temp = lstsize_ps(b) - idx;
	temp = find_spot_a(a, num) + temp;
	return (temp);
}

int	calc_rra_rb_a(t_stack *a, t_stack *b, int num)
{
	int	temp;
	int	spot;

	temp = 0;
	spot = find_spot_a(a, num);
	if (spot)
		temp = lstsize_ps(a) - spot;
	temp = find_idx(b, num) + temp;
	return (temp);
}

int	calc_rra_rrb_a(t_stack *a, t_stack *b, int num)
{
	int	temp;
	int	spot;
	int	idx;

	temp = 0;
	spot = find_spot_a(a, num);
	idx = find_idx(b, num);
	if (spot)
		temp = lstsize_ps(a) - spot;
	if ((temp < (lstsize_ps(b) - idx)) && idx)
		temp = lstsize_ps(b) - idx;
	return (temp);
}
