/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:12:40 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 19:05:28 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
