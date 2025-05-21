/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:52 by dalbano           #+#    #+#             */
/*   Updated: 2025/05/21 14:23:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	long			nbr;
	long			idx;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

// main functions
// void				print_stack(t_stack *a);

// Implementations of stack operations
void				sa(t_stack **a);
void				sb(t_stack **b);
void				sx(t_stack **stack);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				px(t_stack **stack1, t_stack **stack2);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rx(t_stack **stack);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				rrx(t_stack **stack);

// Helper functions
t_stack				*new_stack(int content);
t_stack				*lstlast_ps(t_stack *lst);
int					lstsize_ps(t_stack *lst);
int					min_ps(t_stack *a);
int					max_ps(t_stack *a);
void				stack_revadd(t_stack **stack, t_stack *new);
int					atoi_ps(const char *str);
int					is_sorted(t_stack *a);
void				free_stack(t_stack **stack);
void				free_splitted(char **splitted);
int					duplicate_check(t_stack *a);
void				error_msg(void);

// Algorithm functions
void				do_sort(t_stack **a);

// Algorithm helper funcs
t_stack				*fill_stack(int ac, char **av);
t_stack				*fill_help(char **av);
int					atoi_ps(const char *str);

#endif /* PUSH_SWAP_H */