/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:15:18 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 14:39:46 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the top two elements of stack `a`
void	sa(t_stack **a)
{
	ft_printf("sa\n");
	sx(a);
}

// Swap the top two elements of stack `b`
void	sb(t_stack **b)
{
	ft_printf("sb\n");
	sx(b);
}

// Swap the top two elements of both stacks `a` and `b`
void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}

// Push the top element from stack `b` to stack `a`
void	pa(t_stack **a, t_stack **b)
{
	ft_printf("pa\n");
	px(a, b);
}

// Push the top element from stack `a` to stack `b`
void	pb(t_stack **a, t_stack **b)
{
	ft_printf("pb\n");
	px(b, a);
}
