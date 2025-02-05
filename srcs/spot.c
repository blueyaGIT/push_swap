/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spot.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:33:26 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 15:47:16 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * finds correct spot in a and checks for correct idx
 */
int	find_spot_a(t_stack *a, int num)
{
	int		spot;
	t_stack	*temp;

	spot = 1;
	if (num < a->nbr && num > lstlast_ps(a)->nbr)
		spot = 0;
	else if (num > max_ps(a) || num < min_ps(a))
		spot = find_idx(a, min_ps(a));
	else
	{
		temp = a->next;
		while (temp && (a->nbr > num || temp->nbr > num))
		{
			a = a->next;
			temp = a->next;
			spot++;
		}
	}
	return (spot);
}

int	find_spot_b(t_stack *b, int num)
{
	int		spot;
	t_stack	*temp;

	spot = 1;
	if (num > b->nbr && num < lstlast_ps(b)->nbr)
		spot = 0;
	else if (num > max_ps(b) || num < min_ps(b))
		spot = find_idx(b, max_ps(b));
	else
	{
		temp = b->next;
		while (temp && (b->nbr < num || temp->nbr > num))
		{
			b = b->next;
			temp = b->next;
			spot++;
		}
	}
	return (spot);
}
