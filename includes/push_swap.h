/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:52 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/25 16:26:42 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	long				nbr;
	long				index;
	struct s_stack		*next;
	struct s_stack		*prev;
}						t_stack;

typedef enum s_stack_definer
{
	up,
	down,
	e_a,
	e_b
}	t_stack_definer;

// main functions

void					print_stack(t_stack *a, t_stack *b);

// Implementations of stack operations

void					sx(t_stack **stack);
void					sa(t_stack **a);
void					sb(t_stack **b);
void					ss(t_stack **a, t_stack **b);
void					px(t_stack **stack1, t_stack **stack2);
void					pa(t_stack **a, t_stack **b);
void					pb(t_stack **a, t_stack **b);
void					rx(t_stack **stack);
void					ra(t_stack **a);
void					rb(t_stack **b);
void					rr(t_stack **a, t_stack **b);
void					rrx(t_stack **stack);
void					rra(t_stack **a);
void					rrb(t_stack **b);
void					rrr(t_stack **a, t_stack **b);

// Sorting functions

void					mechanical_turk_sort(t_stack *a, t_stack *b);
void					mechanical_turk_sort_b_to_a(t_stack *a, t_stack *b);
void					sort_two(t_stack *a);
void					sort_three(t_stack *a);

// Helper functions

int						is_sorted(t_stack *a);
void					free_stacks(t_stack *a, t_stack *b);
void					init_stack(t_stack **stack);
void					ft_push(t_stack **stack, long value, int index);
void					rotate_stack(t_stack *stack, int steps, long best,
							t_stack_definer which);

// Algorithm functions

long					find_best_move(t_stack *stack_a, t_stack *stack_b);

// Algorithm helper funcs

long					find_target_position(t_stack *stack_b, long num);
int						calculate_steps_a(t_stack *a, int num);
int						calculate_steps_b(t_stack *b, int num);
int						calculate_rx_steps(t_stack *stack, long num);
int						calculate_rrx_steps(t_stack *stack, long num);
int						min_steps(int rx_steps, int rrx_steps);
t_stack_definer			direction_x(int rx_steps, int rrx_steps);

#endif /* PUSH_SWAP_H */