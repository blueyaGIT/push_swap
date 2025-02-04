/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:18:28 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 15:51:53 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * pushes all elements from b to a
 */
t_stack	**sort_a(t_stack **a, t_stack **b)
{
	int		rotdir;
	t_stack	*temp;

	while (*b)
	{
		temp = *b;
		rotdir = ba_rotate(*a, *b);
		while (rotdir >= 0)
		{
			if (rotdir == calc_ra_rb_a(*a, *b, temp->nbr))
				rotdir = do_ra_rb(a, b, temp->nbr, b_to_a);
			else if (rotdir == calc_ra_rrb_a(*a, *b, temp->nbr))
				rotdir = do_ra_rrb(a, b, temp->nbr, b_to_a);
			else if (rotdir == calc_rra_rrb_a(*a, *b, temp->nbr))
				rotdir = do_rra_rrb(a, b, temp->nbr, b_to_a);
			else if (rotdir == calc_rra_rb_a(*a, *b, temp->nbr))
				rotdir = do_rra_rb(a, b, temp->nbr, b_to_a);
			else
				temp = temp->next;
		}
	}
	return (a);
}
