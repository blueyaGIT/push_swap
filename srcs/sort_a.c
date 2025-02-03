/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:18:28 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 18:59:01 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * pushes all elements from b to a
 */
t_stack	**sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	while (*b)
	{
		temp = *b;
		i = ba_rotate(*a, *b);
		while (i >= 0)
		{
			if (i == calc_ra_rb_a(*a, *b, temp->nbr))
				i = push_ra_rb(a, b, temp->nbr, 'b');
			else if (i == calc_ra_rrb_a(*a, *b, temp->nbr))
				i = push_ra_rrb(a, b, temp->nbr, 'b');
			else if (i == calc_rra_rrb_a(*a, *b, temp->nbr))
				i = push_rra_rrb(a, b, temp->nbr, 'b');
			else if (i == calc_rra_rb_a(*a, *b, temp->nbr))
				i = push_rra_rb(a, b, temp->nbr, 'b');
			else
				temp = temp->next;
		}
	}
	return (a);
}
