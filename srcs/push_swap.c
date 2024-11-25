/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:50 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 17:10:51 by dalbano          ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		temp;

	temp = 0;
	if (argc < 2)
		return (ft_printf("Usage: %s <numbers_to_sort>\n", argv[0]), 1);
	init_stack(&a);
	init_stack(&b);
	while (++temp < argc)
		ft_push(&a, ft_atoi(argv[temp]), temp - 1);
	printf("Pre-Sort\n");
	print_stack(a, b);
	if (temp - 1 > 3)
		mechanical_turk_sort(a, b);
	else if (temp - 1 == 3)
		sort_three(a);
	else if (temp - 1 == 2)
		sort_two(a);
	else
		ft_printf("Sorting not implemented for this number of elements.\n");
	printf("\nPost-Sort\n");
	print_stack(a, b);
	free_stacks(a, b);
	return (0);
}
