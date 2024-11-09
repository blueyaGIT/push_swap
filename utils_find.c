/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:44:46 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/09 07:46:38 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

// Find minimum element in stack `a`
int	find_min(t_stack *a)
{
	int	min;
	int	temp;

	temp = -1;
	min = a->data[0];
	while (++temp <= a->top)
		if (a->data[temp] < min)
			min = a->data[temp];
	return (min);
}

// Find second minimum element in stack `a`
int	find_second_min(t_stack *a)
{
	int	min;
	int	second_min;
	int	temp;

	temp = -1;
	min = find_min(a);
	second_min = __INT_MAX__;
	while (++temp <= a->top)
		if (a->data[temp] != min && a->data[temp] < second_min)
			second_min = a->data[temp];
	return (second_min);
}

int	find_position_in_b(t_stack *b, int num)
{
	int	temp;

	temp = -1;
	while (++temp <= b->top)
	{
		if (num > b->data[temp] && (temp == b->top || num < b->data[temp + 1]))
			return (temp + 1);
	}
	return (0);
}

int	calculate_operations(t_stack *a, t_stack *b, int index)
{
	int	pos_in_b;
	int	ops_a;
	int	ops_b;

	pos_in_b = find_position_in_b(b, a->data[index]);
	if (index <= a->top / 2)
		ops_a = index;
	else
		ops_a = a->top - index + 1;
	if (pos_in_b <= b->top / 2)
		ops_b = pos_in_b;
	else
		ops_b = b->top - pos_in_b + 1;
	return (ops_a + ops_b);
}

int	find_cheapest_number(t_stack *a, t_stack *b)
{
	int	min_ops;
	int	min_index;
	int	ops;
	int	temp;

	min_ops = calculate_operations(a, b, 0);
	min_index = 0;
	temp = -1;
	while (++temp <= a->top)
	{
		ops = calculate_operations(a, b, temp);
		if (ops < min_ops)
		{
			min_ops = ops;
			min_index = temp;
		}
	}
	return (min_index);
}
