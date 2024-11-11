/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:52 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/11 12:43:03 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "printf/ft_printf.h"
# include <stdlib.h>

typedef struct s_stack
{
	int	*data;
	int	top;
	int	size;
}	t_stack;

// Implementations of push_swap operations
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

// Sorting functions
void	sort_two(t_stack *a);
void	sort_three(t_stack *a);
void	mechanical_turk(t_stack *a, t_stack *b);

// Helper functions
int		find_min(t_stack *a);
int		find_second_min(t_stack *a);
void	init_stack(t_stack *stack, int size);
void	push_cheapest_number(t_stack *a, t_stack *b);
int		find_position_in_b(t_stack *b, int num);
int		calculate_operations(t_stack *a, t_stack *b, int index);
int		find_cheapest_number(t_stack *a, t_stack *b);

#endif /* PUSH_SWAP_H */