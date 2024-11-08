/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:25:04 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/08 16:57:36 by dalbano          ###   ########.fr       */
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
	ft_printf("Sorting two elements: %d, %d\n", a->data[a->top], a->data[a->top - 1]);
	if (a->data[a->top] > a->data[a->top - 1])
		sa(a);
}

// Reverse rotate both stacks `a` and `b`
void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}

void	sort_five(t_stack *a, t_stack *b)
{
	int	temp1;
	int	temp2;
	int	temp3;

	temp1 = (a->data[a->top] == find_min(a));
	temp2 = (a->data[a->top] == find_second_min(a));
	ft_printf("T1\n");
	temp3 = a->top;
	while (temp3 > 2)
	{
		if (temp1 || temp2)
		{
			pb(a, b);
			ft_printf("pb\n");
		}
		else
		{
			ra(a);
			ft_printf("ra\n");
		}
		temp3--;
	}
	ft_printf("T2\n");
	sort_three(a);
	while (b->top >= 0)
	{
		pa(a, b);
		if (a->data[a->top] > a->data[a->top - 1])
			sa(a);
	}
}
