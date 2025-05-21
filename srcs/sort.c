/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:15:57 by dalbano           #+#    #+#             */
/*   Updated: 2025/05/21 14:08:59 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_sort(t_stack **a)
{
	t_stack	*curr;
	t_stack	*b;

	b = NULL;
	curr = *a;
	while (curr && curr->next)
	{
		if (curr->nbr > curr->next->nbr)
		{
			pb(a, &b);
			curr = *a;
		}
		else
			curr = curr->next;
	}
}
