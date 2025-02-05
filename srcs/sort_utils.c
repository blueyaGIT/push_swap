/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:15:57 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 15:27:31 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_idx(t_stack *a, int num)
{
	int		count;

	count = 0;
	while (a->next && a->nbr != num)
	{
		count++;
		a = a->next;
	}
	a->idx = 0;
	return (count);
}

void	do_sort(t_stack **a)
{
	int		idx;
	t_stack	*b;

	b = NULL;
	if (lstsize_ps(*a) == 2)
		sa(a);
	else
	{
		b = sort_b(a);
		a = sort_a(a, &b);
		idx = find_idx(*a, min_ps(*a));
		if (idx < lstsize_ps(*a) - idx)
		{
			while ((*a)->nbr != min_ps(*a))
				ra(a);
		}
		else
		{
			while ((*a)->nbr != min_ps(*a))
				rra(a);
		}
	}
}

// Sorts a stack with three elements
void	sort_three(t_stack **a)
{
	if (min_ps(*a) == (*a)->nbr)
	{
		rra(a);
		sa(a);
	}
	else if (max_ps(*a) == (*a)->nbr)
	{
		ra(a);
		if (!is_sorted(*a))
			sa(a);
	}
	else
	{
		if (find_idx(*a, max_ps(*a)) == 1)
			rra(a);
		else
			sa(a);
	}
}
