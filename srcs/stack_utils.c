/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:12:40 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/02 18:20:29 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	min_ps(t_stack *a)
{
	int		i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr < i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

int	max_ps(t_stack *a)
{
	int		i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr > i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
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
