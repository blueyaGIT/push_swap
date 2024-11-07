/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:09:14 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/03 12:36:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbrlen(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

int	ft_print_nbr(int n)
{
	if (ft_putnbr_fd_printf(n, 1) == -1)
		return (-1);
	return (nbrlen(n));
}
