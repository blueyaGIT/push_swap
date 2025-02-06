/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rot_ab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:41:51 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/06 16:25:17 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calc_ra_rb(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = find_spot_b(b, num);
	if (i < find_idx(a, num))
		i = find_idx(a, num);
	return (i);
}

int	calc_rra_rrb(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (find_spot_b(b, num))
		i = lstsize_ps(b) - find_spot_b(b, num);
	if ((i < (lstsize_ps(a) - find_idx(a, num))) && find_idx(a, num))
		i = lstsize_ps(a) - find_idx(a, num);
	return (i);
}

int	calc_rra_rb(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (find_idx(a, num))
		i = lstsize_ps(a) - find_idx(a, num);
	i = find_spot_b(b, num) + i;
	return (i);
}

int	calc_ra_rrb(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (find_spot_b(b, num))
		i = lstsize_ps(b) - find_spot_b(b, num);
	i = find_idx(a, num) + i;
	return (i);
}
