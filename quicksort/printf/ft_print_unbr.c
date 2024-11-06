/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:09:14 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/03 12:36:11 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbrlen(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_putnbr_ufd_printf(unsigned long n, int fd)
{
	if (n >= 10)
	{
		if (ft_putnbr_ufd_printf(n / 10, fd) == -1)
			return (-1);
	}
	if (ft_putchar_fd_printf(n % 10 + '0', fd) == -1)
		return (-1);
	return (0);
}

int	ft_print_unbr(unsigned long n)
{
	if (ft_putnbr_ufd_printf(n, 1) == -1)
		return (-1);
	return (nbrlen(n));
}
