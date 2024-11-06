/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:06:06 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/03 12:41:34 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_nbr(unsigned int n, int uppercase, int temp)
{
	char		*store;
	static int	len = 0;

	len = temp;
	if (uppercase == 1)
		store = "0123456789ABCDEF";
	else
		store = "0123456789abcdef";
	if (n >= 16)
	{
		if (ft_print_hex_nbr(n / 16, uppercase, len) == -1)
			return (-1);
	}
	if (ft_putchar_fd_printf(store[n % 16], 1) == -1)
		return (-1);
	len = len + 1;
	return (len);
}
