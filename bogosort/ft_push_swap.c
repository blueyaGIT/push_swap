/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:50 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/06 19:02:25 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

#include <stdio.h>
#include <time.h>
#include <stdbool.h>

// Check if stack `a` is sorted
bool	is_sorted(t_stack *a)
{
	int	temp;

	temp = -1;
	while (++temp < a->top)
		if (a->data[temp] > a->data[temp + 1])
			return (false);
	return (true);
}

// Shuffle stack `a` by randomly moving elements to and from `b`
void	random_shuffle(t_stack *a, t_stack *b)
{
	int	n;

	n = rand() % 3;
	if (n == 0 && a->top > 0)
		sa(a);
	else if (n == 1 && a->top > 0)
		pb(a, b);
	else if (n == 2 && b->top >= 0)
		pa(a, b);
}

void	bogo_sort(t_stack *a, t_stack *b)
{
	while (!is_sorted(a))
		random_shuffle(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	srand(time(NULL));
	// Initialize stack `a` with input data here
	// Initialize stack `b` to be empty

	// Start bogo sort
	bogo_sort(&a, &b);
	return (0);
}
