/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:37:26 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/07 13:24:29 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

t_stack	*fill_help(char **av)
{
	t_stack	*a;
	char	**splitted;
	int		temp;
	int		temp2;

	a = NULL;
	temp = 0;
	splitted = ft_split(av[1], 32);
	while (splitted[temp])
	{
		temp2 = atoi_ps(splitted[temp]);
		stack_revadd(&a, new_stack(temp2));
		temp++;
	}
	free_splitted(splitted);
	free(splitted);
	return (a);
}

t_stack	*fill_stack(int ac, char **av)
{
	t_stack	*a;
	int		temp;
	int		temp2;

	temp = 1;
	a = NULL;
	if (ac < 2)
		exit(1);
	if (ac == 2)
		a = fill_help(av);
	else
	{
		while (temp < ac)
		{
			temp2 = atoi_ps(av[temp]);
			stack_revadd(&a, new_stack(temp2));
			temp++;
		}
	}
	return (a);
}
