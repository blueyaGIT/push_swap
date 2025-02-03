/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:16:27 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 18:21:07 by dalbano          ###   ########.fr       */
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
	if (lstsize_ps(*a) > 3 && !is_sorted(*a))
		pb(a, &b);
	if (lstsize_ps(*a) > 3 && !is_sorted(*a))
		pb(a, &b);
	if (lstsize_ps(*a) > 3 && !is_sorted(*a))
		sort_b_small(a, &b);
	if (!is_sorted(*a))
		sort_three(a);
	return (b);
}
