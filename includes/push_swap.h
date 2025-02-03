/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:52 by dalbano           #+#    #+#             */
/*   Updated: 2025/02/03 17:17:28 by dalbano          ###   ########.fr       */
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

typedef enum s_stack_definer
{
	up,
	down,
	e_a,
	e_b
}					t_stack_definer;

// main functions
void				print_stack(t_stack *a);

// Implementations of stack operations
void				sx(t_stack **stack);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				px(t_stack **stack1, t_stack **stack2);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				rx(t_stack **stack);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rrx(t_stack **stack);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);

// Sorting functions
void				do_sort(t_stack *a);
void				do_sort_b_to_a(t_stack *a, t_stack *b);
void				sort_two(t_stack *a);
void				sort_three(t_stack *a);

// Helper functions
t_stack				*new_stack(int content, int idx);
t_stack				*lstlast_ps(t_stack *lst);
int					lstsize_ps(t_stack *lst);
int					min_ps(t_stack *a);
int					max_ps(t_stack *a);
void				ft_stackadd_back(t_stack **stack, t_stack *stack_new);
int					ft_atoi_push_swap(const char *str);
int					is_sorted(t_stack *a);
void				free_stack(t_stack *stack);
void				ft_push(t_stack **stack, long value, int index);
void				rotate_stack(t_stack *stack, int steps, long best,
						t_stack_definer which);
void				free_splitted(char **splitted);
int					duplicate_check(t_stack *a);

// Algorithm functions
long				find_best_move(t_stack *stack_a, t_stack *stack_b);

// Algorithm helper funcs
t_stack				*fill_stack(int ac, char **av);
t_stack				*fill_help(char **av);
int					ft_atoi_push_swap(const char *str);
long				find_target_position(t_stack *stack_b, long num);
int					calculate_steps(t_stack *a, int num);
int					calculate_rx_steps(t_stack *stack, long num);
int					calculate_rrx_steps(t_stack *stack, long num);
int					min_steps(int rx_steps, int rrx_steps);
t_stack_definer		direction_x(int rx_steps, int rrx_steps);

#endif /* PUSH_SWAP_H */