/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:37:26 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/02 18:29:06 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*fill_help(char **av)
{
	t_stack	*a;
	char	**spitted;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	spitted = ft_split(av[1], ' ');
	while (spitted[i])
	{
		j = ft_atoi_push_swap(spitted[i]);
		ft_stackadd_back(&a, new_stack(j, i));
		i++;
	}
	free_splitted(spitted);
	free(spitted);
	return (a);
}

t_stack	*fill_stack(int ac, char **av)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (ac < 2)
		exit(EXIT_FAILURE);
	if (ac == 2)
		a = fill_help(av);
	else
	{
		while (i < ac)
		{
			j = ft_atoi_push_swap(av[i]);
			ft_stackadd_back(&a, new_stack(j, i));
			i++;
		}
	}
	return (a);
}
