/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:15:18 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 16:39:32 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Swap the top two elements of stack `a`
void	sa(t_stack **a)
{
	sx(a);
	ft_printf("sa\n");
}

// Swap the top two elements of stack `b`
void	sb(t_stack **b)
{
	sx(b);
	ft_printf("sb\n");
}

// Swap the top two elements of both stacks `a` and `b`
void	ss(t_stack **a, t_stack **b)
{
	t_stack	*s2;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	s2 = *a;
	*a = (*a)->next;
	s2->next = (*a)->next;
	(*a)->next = s2;
	s2 = *b;
	*b = (*b)->next;
	s2->next = (*b)->next;
	(*b)->next = s2;
	ft_printf("ss\n");
}

// Push the top element from stack `b` to stack `a`
void	pa(t_stack **a, t_stack **b)
{
	px(a, b);
	ft_printf("pa\n");
}

// Push the top element from stack `a` to stack `b`
void	pb(t_stack **a, t_stack **b)
{
	px(b, a);
	ft_printf("pb\n");
}
