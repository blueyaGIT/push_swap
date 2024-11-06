/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:52 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/06 19:14:37 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include "libft/libft.h"
// # include "printf/ft_printf.h"
void	quicksort_stack(t_stack *a, t_stack *b, int start, int end);

// Implementations of push_swap operations
int		find_median(t_stack *stack, int start, int end);
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

typedef struct s_stack {
	int	*data;
	int	top;
	int	size;
}	t_stack;

#endif /* PUSH_SWAP_H */