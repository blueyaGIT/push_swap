/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:16:27 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 17:41:17 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * push all elements but the last three to b
 * sorts b while pushing
 * calls sort_three at the end to sort the last 3 in a
 */
t_stack	*sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (lstsize_ps(*a) >= 3 && !is_sorted(*a))
		pb(a, &b);
	if (lstsize_ps(*a) >= 3 && !is_sorted(*a))
		pb(a, &b);
	if (lstsize_ps(*a) >= 3 && !is_sorted(*a))
		sort_b_small(a, &b);
	if (!is_sorted(*a))
		sort_three(a);
	return (b);
}

/**
 * push + sort all elements except last 3
 */
void	sort_b_small(t_stack **a, t_stack **b)
{
	int		temp;
	t_stack	*stack;

	while (lstsize_ps(*a) > 3)
	{
		stack = *a;
		temp = ab_rotate(*a, *b);
		while (temp >= 0)
		{
			if (!stack)
				pb(a, b);
			if (!stack)
				break ;
			else if (temp == calc_ra_rb(*a, *b, stack->nbr))
				temp = do_ra_rb(a, b, stack->nbr, 1);
			else if (temp == calc_rra_rrb(*a, *b, stack->nbr))
				temp = do_rra_rrb(a, b, stack->nbr, 1);
			else if (temp == calc_ra_rrb(*a, *b, stack->nbr))
				temp = do_ra_rrb(a, b, stack->nbr, 1);
			else if (temp == calc_rra_rb(*a, *b, stack->nbr))
				temp = do_rra_rb(a, b, stack->nbr, 1);
			else
				stack = stack->next;
		}
	}
}
