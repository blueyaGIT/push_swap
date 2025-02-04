/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:08:51 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 23:20:25 by dalbano          ###   ########.fr       */
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

int	atoi_ps(const char *str)
{
	int				sign;
	long long int	num;

	num = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
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
			error_msg();
		num = num * 10 + (*str - 48);
		str++;
	}
	if ((sign * num) > 2147483647 || (sign * num) < -2147483648)
		error_msg();
	return (sign * num);
}

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
