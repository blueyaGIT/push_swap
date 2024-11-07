/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:50 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/07 11:22:10 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "printf/ft_printf.h"

void	init_stack(t_stack *stack, int size)
{
	stack->data = malloc(size * sizeof(int));
	if (!stack->data)
	{
		ft_printf("Failed to allocate memory\n");
		exit(EXIT_FAILURE);
	}
	stack->top = -1;
	stack->size = size;
}

static void	too_long_func(t_stack a)
{
	int	temp;

	temp = a.top;
	while (temp >= 0)
	{
		ft_printf("%d\n", a.data[temp]);
		temp--;
	}
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		temp;

	temp = -1;
	if (argc < 2)
	{
		ft_printf("Usage: %s <numbers_to_sort>\n", argv[0]);
		return (1);
	}
	init_stack(&a, argc - 1);
	init_stack(&b, argc - 1);
	while (++temp < argc)
		a.data[++a.top] = ft_atoi(argv[temp]);
	if (a.top + 1 == 2)
		sort_two(&a);
	else if (a.top + 1 == 3)
		sort_three(&a);
	else if (a.top + 1 == 5)
		sort_five(&a, &b);
	else
		ft_printf("Sorting not implemented for this number of elements.\n");
	too_long_func(a);
	return (free(a.data), free(b.data), 0);
}
