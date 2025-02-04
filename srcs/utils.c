/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:25:04 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 23:33:11 by dalbano          ###   ########.fr       */
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
