/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:12:40 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/06 16:13:24 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_revadd(t_stack **stack, t_stack *new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = new;
	else
		(lstlast_ps(*stack))->next = new;
}

void	error_msg(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

void	free_splitted(char **splitted)
{
	char	*node;

	if (!splitted)
		return ;
	while (*splitted)
	{
		node = *splitted;
		splitted++;
		free(node);
	}
	*splitted = NULL;
}

void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!stack)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		(*stack)->nbr = 0;
		free(*stack);
		*stack = temp;
	}
}
