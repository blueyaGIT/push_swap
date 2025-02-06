/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:25:04 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/06 15:20:01 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Checks if the stack `a` is sorted in ascending order
int	is_sorted(t_stack *a)
{
	int	temp;

	temp = a->nbr;
	while (a)
	{
		if (temp > a->nbr)
			return (0);
		temp = a->nbr;
		a = a->next;
	}
	return (1);
}

t_stack	*new_stack(int content)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		error_msg();
	new->nbr = content;
	new->next = NULL;
	return (new);
}
