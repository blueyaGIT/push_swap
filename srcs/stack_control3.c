/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:22:37 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 17:10:51 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Reverse rotate both stacks `a` and `b`
void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}
