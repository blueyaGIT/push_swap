/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:14:25 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 13:39:59 by dalbano          ###   ########.fr       */
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

void	push(t_stack *stack, long value)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (new_node == NULL)
	{
		ft_printf("Memory allocation failed!\n");
		return ;
	}
	new_node->nbr = value;
	new_node->next = stack;
	new_node->prev = NULL;
	if (stack != NULL)
		stack->prev = new_node;
	stack = new_node;
}

void	init_stack(t_stack *stack)
{
	stack->nbr = 0;
	stack->index = -1;
	stack->next = NULL;
	stack->prev = NULL;
}
