/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:50 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/02 18:10:01 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	t_stack	*current_b;

	current_a = a;
	current_b = b;
	while (current_a || current_b)
	{
		if (current_a)
		{
			ft_printf("%d", current_a->nbr);
			current_a = current_a->next;
		}
		else
			ft_printf("*");
		ft_printf("       ");
		if (current_b)
		{
			ft_printf("%d", current_b->nbr);
			current_b = current_b->next;
		}
		else
			ft_printf("*");
		printf("\n");
	}
	ft_printf("-       -\na       b\n\n");
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		temp;

	temp = 0;
	if (ac < 2)
		return (ft_printf("Usage: %s <numbers_to_sort>\n", av[0]), 1);
	a = fill_stack(ac, av);
	b = NULL;
	printf("Pre-Sort\n");
	print_stack(a, b);
	do_sort(a, b);
	printf("\nPost-Sort\n");
	print_stack(a, b);
	free_stacks(a, b);
	return (0);
}
