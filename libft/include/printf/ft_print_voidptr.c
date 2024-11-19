/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_voidptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:49:54 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/30 15:10:54 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_voidptr(unsigned long long ptr, int len)
{
	char	*hex;
	int		res;

	res = 0;
	hex = "0123456789abcdef";
	if (ptr >= 16)
	{
		len = ft_put_voidptr(ptr / 16, len);
		if (len == -1)
			return (-1);
	}
	res = ft_putchar_fd_printf(hex[ptr % 16], 1);
	if (res == -1)
		return (-1);
	len += res;
	return (len);
}

int	ft_print_voidptr(unsigned long long ptr)
{
	int	len;
	int	res;

	len = ft_putstr_fd_printf("0x", 1);
	if (len == -1)
		return (-1);
	if (ptr == 0)
	{
		res = ft_putchar_fd_printf('0', 1);
		if (res == -1)
			return (-1);
		return (len + res);
	}
	res = ft_put_voidptr(ptr, 0);
	if (res == -1)
		return (-1);
	len += res;
	return (len);
}
