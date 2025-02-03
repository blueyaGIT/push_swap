/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:08:51 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 18:37:06 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_revadd(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(lstlast_ps(*stack))->next = stack_new;
}

int	atoi_ps(const char *str)
{
	int				sign;
	long long int	i;

	i = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			exit(EXIT_FAILURE);
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((sign * i) > 2147483647 || (sign * i) < -2147483648)
		exit(EXIT_FAILURE);
	return (sign * i);
}

t_stack	*lstlast_ps(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	lstsize_ps(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_stack	*new_stack(int content, int idx)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		exit(EXIT_FAILURE);
	new->nbr = content;
	new->idx = idx;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
