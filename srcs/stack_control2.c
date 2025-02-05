/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:24:08 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 16:40:16 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Rotate stack `a` upwards
void	ra(t_stack **a)
{
	rx(a);
	ft_printf("ra\n");
}

// Rotate stack `b` upwards
void	rb(t_stack **b)
{
	rx(b);
	ft_printf("rb\n");
}

// Rotate both stacks `a` and `b` upwards
void	rr(t_stack **a, t_stack **b)
{
	t_stack	*s2;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	s2 = *a;
	*a = lstlast_ps(*a);
	(*a)->next = s2;
	*a = s2->next;
	s2->next = NULL;
	s2 = *b;
	*b = lstlast_ps(*b);
	(*b)->next = s2;
	*b = s2->next;
	s2->next = NULL;
	ft_printf("rr\n");
}

// Reverse rotate stack `a`
void	rra(t_stack **a)
{
	rrx(a);
	ft_printf("rra\n");
}

// Reverse rotate stack `b`
void	rrb(t_stack **b)
{
	rrx(b);
	ft_printf("rrb\n");
}
