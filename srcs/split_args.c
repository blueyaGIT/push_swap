/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:37:26 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/05 00:07:48 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*fill_help(char **av)
{
	int		temp;
	int		temp2;
	char	**splitted;
	t_stack	*a;

	a = NULL;
	temp = 0;
	splitted = split_ps(av[1], ' ');
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
	int		temp;
	int		temp2;
	t_stack	*a;

	temp = 1;
	a = NULL;
	if (ac < 2)
		error_msg();
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
