/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:18:28 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 16:29:01 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * pushes all elements from b to a
 */
t_stack	**sort_a(t_stack **a, t_stack **b)
{
	int		temp;
	t_stack	*stack;

	while (*b)
	{
		stack = *b;
		temp = ba_rotate(*a, *b);
		while (temp >= 0)
		{
			if (temp == calc_ra_rb_a(*a, *b, stack->nbr))
				temp = do_ra_rb(a, b, stack->nbr, 0);
			else if (temp == calc_ra_rrb_a(*a, *b, stack->nbr))
				temp = do_ra_rrb(a, b, stack->nbr, 0);
			else if (temp == calc_rra_rrb_a(*a, *b, stack->nbr))
				temp = do_rra_rrb(a, b, stack->nbr, 0);
			else if (temp == calc_rra_rb_a(*a, *b, stack->nbr))
				temp = do_rra_rb(a, b, stack->nbr, 0);
			else
				stack = stack->next;
		}
	}
	return (a);
}
