/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:25:04 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/09 07:51:03 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

static void	too_long_func(t_stack *a)
{
	int	tt;
	int	ttmo;
	int	ttmt;

	tt = a->data[a->top];
	ttmo = a->data[a->top - 1];
	ttmt = a->data[a->top - 2];
	if (tt > ttmo && ttmo < ttmt)
		sa(a);
	else if (tt < ttmo && ttmo > ttmt && tt < ttmt)
	{
		sa(a);
		ra(a);
	}
	else if (tt < ttmo && ttmo > ttmt)
		rra(a);
}

void	sort_three(t_stack *a)
{
	int	tt;
	int	ttmo;
	int	ttmt;

	tt = a->data[a->top];
	ttmo = a->data[a->top - 1];
	ttmt = a->data[a->top - 2];
	if (tt > ttmo && ttmo > ttmt)
	{
		sa(a);
		rra(a);
	}
	else if (tt > ttmo && ttmo < ttmt && tt > ttmt)
		ra(a);
	else
		too_long_func(a);
}

void	sort_two(t_stack *a)
{
	if (a->data[a->top] > a->data[a->top - 1])
		sa(a);
}

// Reverse rotate both stacks `a` and `b`
void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}

void	mechanical_turk(t_stack *a, t_stack *b)
{
	pb(a, b);
	pb(a, b);
	while (a->top >= 0)
		push_cheapest_number(a, b);
}
