/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:08:51 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/06 15:42:38 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*lstlast_ps(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	lstsize_ps(t_stack *stack)
{
	size_t	temp;

	temp = 0;
	while (stack)
	{
		stack = stack->next;
		temp++;
	}
	return (temp);
}

int	min_ps(t_stack *a)
{
	int		temp;

	temp = a->nbr;
	while (a)
	{
		if (a->nbr < temp)
			temp = a->nbr;
		a = a->next;
	}
	return (temp);
}

int	max_ps(t_stack *a)
{
	int		temp;

	temp = a->nbr;
	while (a)
	{
		if (a->nbr > temp)
			temp = a->nbr;
		a = a->next;
	}
	return (temp);
}
