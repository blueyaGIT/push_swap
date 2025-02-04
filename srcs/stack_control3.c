/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:22:37 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 17:48:56 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Reverse rotate both stacks `a` and `b`
void	rrr(t_stack **a, t_stack **b)
{
	ft_printf("rrr\n");
	rrx(a);
	rrx(b);
}
