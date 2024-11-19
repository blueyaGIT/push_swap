/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:14:25 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 13:17:10 by dalbano          ###   ########.fr       */
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
