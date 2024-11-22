/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:52 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/22 17:55:48 by dalbano          ###   ########.fr       */
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
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

// Implementations of stack operations
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);
void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);

// Sorting functions
void				mechanical_turk_sort(t_stack *a, t_stack *b);
void				mechanical_turk_sort_b_to_a(t_stack *a, t_stack *b);
void				sort_two(t_stack *a);
void				sort_three(t_stack *a);

// Helper functions
int					is_sorted(t_stack *a);
void				free_stacks(t_stack *a, t_stack *b);
void				init_stack(t_stack **stack);
void				ft_push(t_stack **stack, long value, int index);
// Algorithm functions
long				find_best_move(t_stack *stack_a, t_stack *stack_b);
int					calculate_steps(t_stack *stack_a, t_stack *stack_b,
						int num);
// Algorithm helper funcs
int					find_target_position(t_stack *stack_b, long num);
int					calculate_ra_steps(t_stack *stack_a, long num);
int					calculate_rra_steps(t_stack *stack_a, long num);
int					calculate_rb_steps(t_stack *stack_b, int target_position);
int					calculate_rrb_steps(t_stack *stack_b, int target_position);

#endif /* PUSH_SWAP_H */