/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rotation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:24:59 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 18:58:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * calculates the cheapest rotation method to push from b to a
 */
int	ba_rotate(t_stack *a, t_stack *b)
{
	t_stack	*temp;
	int		count;

	temp = b;
	count = calc_rra_rrb_a(a, b, b->nbr);
	while (temp)
	{
		if (count > calc_ra_rb_a(a, b, temp->nbr))
			count = calc_ra_rb_a(a, b, temp->nbr);
		if (count > calc_rra_rrb_a(a, b, temp->nbr))
			count = calc_rra_rrb_a(a, b, temp->nbr);
		if (count > calc_ra_rrb_a(a, b, temp->nbr))
			count = calc_ra_rrb_a(a, b, temp->nbr);
		if (count > calc_rra_rb_a(a, b, temp->nbr))
			count = calc_rra_rb_a(a, b, temp->nbr);
		temp = temp->next;
	}
	return (count);
}

/**
 * calculates the cheapest rotation method to push from a to b
 */
int	ab_rotate(t_stack *a, t_stack *b)
{
	t_stack	*temp;
	int		count;

	temp = b;
	count = calc_rra_rrb(a, b, a->nbr);
	while (temp)
	{
		if (count > calc_ra_rb(a, b, temp->nbr))
			count = calc_ra_rb(a, b, temp->nbr);
		if (count > calc_rra_rrb(a, b, temp->nbr))
			count = calc_rra_rrb(a, b, temp->nbr);
		if (count > calc_ra_rrb(a, b, temp->nbr))
			count = calc_ra_rrb(a, b, temp->nbr);
		if (count > calc_rra_rb(a, b, temp->nbr))
			count = calc_rra_rb(a, b, temp->nbr);
		temp = temp->next;
	}
	return (count);
}
