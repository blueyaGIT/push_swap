/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rotb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:48:32 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 18:53:54 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calc_ra_rb_a(t_stack *a, t_stack *b, long num)
{
	int	temp;

	temp = find_spot_a(a, num);
	if (temp < find_idx(b, num))
		temp = find_idx(b, num);
	return (temp);
}

int	calc_ra_rrb_a(t_stack *a, t_stack *b, int num)
{
	int	temp;

	temp = 0;
	if (find_idx(b, num))
		temp = lstsize_ps(b) - find_idx(b, num);
	temp = find_spot_a(a, num) + temp;
	return (temp);
}

int	calc_rra_rb_a(t_stack *a, t_stack *b, int num)
{
	int	temp;

	temp = 0;
	if (find_spot_a(a, num))
		temp = lstsize_ps(a) - find_spot_a(a, num);
	temp = find_idx(b, num) + temp;
	return (temp);
}

int	calc_rra_rrb_a(t_stack *a, t_stack *b, int num)
{
	int	temp;

	temp = 0;
	if (find_spot_a(a, num))
		temp = lstsize_ps(a) - find_spot_a(a, num);
	if ((temp < (lstsize_ps(b) - find_idx(b, num))) && find_idx(b, num))
		temp = lstsize_ps(b) - find_idx(b, num);
	return (temp);
}
