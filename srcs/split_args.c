/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:37:26 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 19:02:42 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*fill_help(char **av)
{
	t_stack	*a;
	char	**spitted;
	int		temp;
	int		temp2;

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
	t_stack	*a;
	int		temp;
	int		temp2;

	temp = 1;
	a = NULL;
	if (ac < 2)
		exit(EXIT_FAILURE);
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
