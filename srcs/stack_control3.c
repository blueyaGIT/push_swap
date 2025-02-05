/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_control3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:22:37 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 16:38:30 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrr_next(t_stack **b)
{
	t_stack	*s2;
	int		temp;

	temp = 0;
	s2 = *b;
	while ((*b)->next)
	{
		temp++;
		*b = (*b)->next;
	}
	(*b)->next = s2;
	while (temp > 1)
	{
		s2 = s2->next;
		temp--;
	}
	s2->next = NULL;
	ft_printf("rrr\n");
}

// Reverse rotate both stack `a` and `b`
void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*s2;
	int		temp;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	temp = 0;
	s2 = *a;
	while ((*a)->next)
	{
		temp++;
		*a = (*a)->next;
	}
	(*a)->next = s2;
	while (temp > 1)
	{
		s2 = s2->next;
		temp--;
	}
	s2->next = NULL;
	rrr_next(b);
}
