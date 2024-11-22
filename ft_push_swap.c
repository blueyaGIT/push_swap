/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:50 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/22 17:54:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		temp;

	temp = 0;
	if (argc < 2)
	{
		ft_printf("Usage: %s <numbers_to_sort>\n", argv[0]);
		return (1);
	}
	init_stack(&a);
	init_stack(&b);
	while (++temp < argc)
		ft_push(&a, ft_atoi(argv[temp]), temp - 1);
	if (temp - 1 > 3)
		mechanical_turk_sort(&a, &b);
	else if (temp - 1 == 3)
		sort_three(&a);
	else if (temp - 1 == 2)
		sort_two(&a);
	else
		ft_printf("Sorting not implemented for this number of elements.\n");
	free_stacks(&a, &b);
	return (0);
}
