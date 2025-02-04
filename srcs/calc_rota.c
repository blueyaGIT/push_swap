/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rota.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:41:51 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 17:17:26 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calc_ra_rb(t_stack *a, t_stack *b, long num)
{
		printf("Inside calc_ra_rb\n");
	int	temp;

	temp = find_spot_b(b, num);
	if (temp < find_idx(a, num))
		temp = find_idx(a, num);
	return (temp);
}

int	calc_ra_rrb(t_stack *a, t_stack *b, int num)
{
	int	temp;

	temp = 0;
	if (find_spot_b(b, num))
		temp = lstsize_ps(b) - find_spot_b(b, num);
	temp = find_idx(a, num) + temp;
	return (temp);
}

int	calc_rra_rb(t_stack *a, t_stack *b, int num)
{
	int	temp;

	temp = 0;
	if (find_idx(a, num))
		temp = lstsize_ps(a) - find_idx(a, num);
	temp = find_spot_b(b, num) + temp;
	return (temp);
}

int	calc_rra_rrb(t_stack *a, t_stack *b, int num)
{
	int	temp;

	temp = 0;
	if (find_spot_b(b, num))
		temp = lstsize_ps(b) - find_spot_b(b, num);
	if ((temp < (lstsize_ps(a) - find_idx(a, num))) && find_idx(a, num))
		temp = lstsize_ps(a) - find_idx(a, num);
	return (temp);
}
