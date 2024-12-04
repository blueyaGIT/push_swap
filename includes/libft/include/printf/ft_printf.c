/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:43:55 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 11:39:38 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_conversion(char conversion, va_list args)
{
	if (conversion == '%')
		return (ft_putchar_fd_printf('%', 1));
	else if (conversion == 'c')
		return (ft_putchar_fd_printf(va_arg(args, int), 1));
	else if (conversion == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (conversion == 'p')
		return (ft_print_voidptr(va_arg(args, unsigned long long)));
	else if (conversion == 'd' || conversion == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (conversion == 'u')
		return (ft_print_unbr(va_arg(args, unsigned int)));
	else if (conversion == 'x')
		return (ft_print_hex_nbr(va_arg(args, unsigned long long), 0, 0));
	else if (conversion == 'X')
		return (ft_print_hex_nbr(va_arg(args, unsigned long long), 1, 0));
	else
		return (-1);
}

int	ft_printf(const char *inputstring, ...)
{
	int		res;
	int		len;
	va_list	args;

	va_start(args, inputstring);
	len = 0;
	while (*inputstring)
	{
		if (*inputstring == '%' && ft_strchr_p("cspdiuxX%", *(inputstring + 1)))
		{
			inputstring++;
			res = ft_print_conversion(*inputstring, args);
			if (res == -1)
				return (va_end(args), -1);
			len += res;
		}
		else
		{
			if (ft_putchar_fd_printf(*inputstring, 1) == -1)
				return (va_end(args), -1);
			len++;
		}
		inputstring++;
	}
	return (va_end(args), len);
}
