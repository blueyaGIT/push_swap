/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:52 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/06 19:05:44 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include "libft/libft.h"
// # include "printf/ft_printf.h"
# include <stdbool.h>

void	bogo_sort(t_stack *a, t_stack *b);
void	random_shuffle(t_stack *a, t_stack *b);
bool	is_sorted(t_stack *a);

// Implementations of push_swap operations
void	sa(t_stack *a);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rra(t_stack *a);

typedef struct s_stack {
	int	*data;
	int	top;
}	t_stack;

#endif /* PUSH_SWAP_H */