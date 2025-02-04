/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:32:23 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 22:40:34 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * rotates both `a` and `b` forwards
 * ends with push
 */
int	do_ra_rb(t_stack **a, t_stack **b, int num, t_sdef direction)
{
	if (direction == a_to_b)
	{
		while ((*a)->nbr != num && find_spot_a(*b, num) > 0)
			rr(a, b);
		while ((*a)->nbr != num)
			ra(a);
		while (find_spot_a(*b, num) > 0)
			rb(b);
		pb(a, b);
	}
	else
	{
		while ((*b)->nbr != num && find_spot_a(*a, num) > 0)
			rr(a, b);
		while ((*b)->nbr != num)
			rb(b);
		while (find_spot_a(*a, num) > 0)
			ra(a);
		pa(a, b);
	}
	return (-1);
}

/**
 * rotates `a` forwards and `b` backwards
 * ends with push
 */
int	do_ra_rrb(t_stack **a, t_stack **b, int num, t_sdef direction)
{
	if (direction == a_to_b)
	{
		while ((*a)->nbr != num)
			ra(a);
		while (find_spot_a(*b, num) > 0)
			rrb(b);
		pb(a, b);
	}
	else
	{
		while (find_spot_a(*a, num) > 0)
			ra(a);
		while ((*b)->nbr != num)
			rrb(b);
		pa(a, b);
	}
	return (-1);
}

/**
 * rotates `a` backwards and `b` forwards
 * ends with push
 */
int	do_rra_rb(t_stack **a, t_stack **b, int num, t_sdef direction)
{
	if (direction == a_to_b)
	{
		while ((*a)->nbr != num)
			rra(a);
		while (find_spot_a(*b, num) > 0)
			rb(b);
		pb(a, b);
	}
	else
	{
		while (find_spot_a(*a, num) > 0)
			rra(a);
		while ((*b)->nbr != num)
			rb(b);
		pa(a, b);
	}
	return (-1);
}

/**
 * rotates both `a` and `b` backwards
 * ends with push
 */
int	do_rra_rrb(t_stack **a, t_stack **b, int num, t_sdef direction)
{
	if (direction == a_to_b)
	{
		while ((*a)->nbr != num && find_spot_a(*b, num) > 0)
			rrr(a, b);
		while ((*a)->nbr != num)
			rra(a);
		while (find_spot_a(*b, num) > 0)
			rrb(b);
		pb(a, b);
	}
	else
	{
		while ((*b)->nbr != num && find_spot_a(*a, num) > 0)
			rrr(a, b);
		while ((*b)->nbr != num)
			rrb(b);
		while (find_spot_a(*a, num) > 0)
			rra(a);
		pa(a, b);
	}
	return (-1);
}
