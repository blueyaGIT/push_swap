/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rot_ba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:48:32 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/06 16:25:31 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calc_ra_rb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = find_spot_a(a, num);
	if (i < find_idx(b, num))
		i = find_idx(b, num);
	return (i);
}

int	calc_rra_rrb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (find_spot_a(a, num))
		i = lstsize_ps(a) - find_spot_a(a, num);
	if ((i < (lstsize_ps(b) - find_idx(b, num))) && find_idx(b, num))
		i = lstsize_ps(b) - find_idx(b, num);
	return (i);
}

int	calc_ra_rrb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (find_idx(b, num))
		i = lstsize_ps(b) - find_idx(b, num);
	i = find_spot_a(a, num) + i;
	return (i);
}

int	calc_rra_rb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (find_spot_a(a, num))
		i = lstsize_ps(a) - find_spot_a(a, num);
	i = find_idx(b, num) + i;
	return (i);
}
