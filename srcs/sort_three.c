/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:35:23 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/06 16:26:43 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Sorts a stack with three elements
void	sort_three(t_stack **a)
{
	if ((*a)->nbr == max_ps(*a))
		ra(a);
	else if ((*a)->next->nbr == max_ps(*a))
		rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}
