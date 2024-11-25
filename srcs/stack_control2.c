/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:24:08 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 17:10:51 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Rotate stack `a` upwards
void	ra(t_stack **a)
{
	ft_printf("ra\n");
	rx(a);
}

// Rotate stack `b` upwards
void	rb(t_stack **b)
{
	ft_printf("rb\n");
	rx(b);
}

// Rotate both stacks `a` and `b` upwards
void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
}

// Reverse rotate stack `a`
void	rra(t_stack **a)
{
	ft_printf("rra\n");
	rrx(a);
}

// Reverse rotate stack `b`
void	rrb(t_stack **b)
{
	ft_printf("rrb\n");
	rrx(b);
}
