/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:52 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 11:43:01 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

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
void	mechanical_turk_sort(t_stack *a, t_stack *b);
void	mechanical_turk_sort_b_to_a(t_stack *a, t_stack *b);
void	sort_two(t_stack *a);
void	sort_three(t_stack *a);

// Helper functions
void	partition(t_stack *a, t_stack *b, int median);
int		is_sorted(t_stack *a);

// stack a finder logic
t_stack	*init_stack(t_stack	*stack, int size);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);
int		findSmallest(t_stack *stack);
int		findLargest(t_stack *stack);

#endif /* PUSH_SWAP_H */