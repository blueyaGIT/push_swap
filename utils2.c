/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:14:25 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/24 11:54:19 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stack *a, t_stack *b)
{
	t_stack	*temp;

	while (a != NULL)
	{
		temp = a;
		a = a->next;
		free(temp);
	}
	while (b != NULL)
	{
		temp = b;
		b = b->next;
		free(temp);
	}
}

void	ft_push(t_stack **stack, long value, int index)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
	{
		ft_printf("Memory allocation failed!\n");
		exit(EXIT_FAILURE);
	}
	new_node->nbr = value;
	new_node->index = index;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}

void	init_stack(t_stack **stack)
{
	*stack = NULL;
}
