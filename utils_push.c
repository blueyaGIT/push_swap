/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 07:47:03 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/09 07:48:50 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

void	push_cheapest_number(t_stack *a, t_stack *b)
{
	int	index;
	int	pos_in_b;

	index = find_cheapest_number(a, b);
	pos_in_b = find_position_in_b(b, a->data[index]);
	if (index <= a->top / 2)
		while (index-- > 0)
			ra(a);
	else
		while (index++ < a->top)
			rra(a);
	if (pos_in_b <= b->top / 2)
		while (pos_in_b-- > 0)
			rb(b);
	else
		while (pos_in_b++ < b->top)
			rrb(b);
	pb(a, b);
}
