/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:37:26 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 17:18:39 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*fill_help(char **av)
{
	int		temp;
	int		temp2;
	char	**spitted;
	t_stack	*a;

	a = NULL;
	temp = 0;
	spitted = ft_split(av[1], ' ');
	while (spitted[temp])
	{
		temp2 = atoi_ps(spitted[temp]);
		stack_revadd(&a, new_stack(temp2, temp));
		temp++;
	}
	free_splitted(spitted);
	free(spitted);
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
		exit(1);
	if (ac == 2)
		a = fill_help(av);
	else
	{
		while (temp < ac)
		{
			temp2 = atoi_ps(av[temp]);
			stack_revadd(&a, new_stack(temp2, temp));
			temp++;
		}
	}
	return (a);
}
