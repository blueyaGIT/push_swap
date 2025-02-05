/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rota.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:41:51 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 15:31:48 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calc_ra_rb(t_stack *a, t_stack *b, int num)
{
	int	temp;
	int	idx;

	temp = find_spot_b(b, num);
	idx = find_idx(a, num);
	if (temp < idx)
		temp = idx;
	return (temp);
}

int	calc_ra_rrb(t_stack *a, t_stack *b, int num)
{
	int	temp;
	int	spot;

	temp = 0;
	spot = find_spot_b(b, num);
	if (spot)
		temp = lstsize_ps(b) - spot;
	temp = find_idx(a, num) + temp;
	return (temp);
}

int	calc_rra_rb(t_stack *a, t_stack *b, int num)
{
	int	temp;
	int	idx;

	temp = 0;
	idx = find_idx(a, num);
	if (idx)
		temp = lstsize_ps(a) - idx;
	temp = find_spot_b(b, num) + temp;
	return (temp);
}

int	calc_rra_rrb(t_stack *a, t_stack *b, int num)
{
	int	temp;
	int	spot;
	int	idx;

	temp = 0;
	spot = find_spot_b(b, num);
	idx = find_idx(a, num);
	if (spot)
		temp = lstsize_ps(b) - spot;
	if ((temp < (lstsize_ps(a) - idx)) && idx)
		temp = lstsize_ps(a) - idx;
	return (temp);
}
