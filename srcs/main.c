/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:50 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/04 23:19:32 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	print_stack(t_stack *a)
// {
// 	t_stack	*current_a;

// 	current_a = a;
// 	while (current_a)
// 	{
// 		if (current_a)
// 		{
// 			ft_printf("%d", current_a->nbr);
// 			current_a = current_a->next;
// 		}
// 		else
// 			ft_printf("*");
// 		printf("\n");
// 	}
// 	ft_printf("-\na\n\n");
// }

int	main(int ac, char **av)
{
	t_stack	*a;

	if (ac < 2)
		return (ft_printf("Usage: %s <numbers_to_sort>\n", av[0]), 1);
	a = fill_stack(ac, av);
	if (!a || duplicate_check(a))
	{
		free_stack(&a);
		error_msg();
	}
	if (!is_sorted(a))
		do_sort(&a);
	free_stack(&a);
	return (0);
}
