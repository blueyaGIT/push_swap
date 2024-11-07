/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:45:23 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/30 15:16:13 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_putchar_fd_printf(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putnbr_fd_printf(int n, int fd)
{
	if (n == -2147483648)
	{
		if (write(fd, "-2147483648", 11) == -1)
			return (-1);
		return (0);
	}
	if (n < 0)
	{
		if (ft_putchar_fd_printf('-', fd) == -1)
			return (-1);
		n = n * -1;
	}
	if (n >= 10)
	{
		if (ft_putnbr_fd_printf(n / 10, fd) == -1)
			return (-1);
	}
	if (ft_putchar_fd_printf(n % 10 + '0', fd) == -1)
		return (-1);
	return (0);
}

int	ft_putstr_fd_printf(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	while (*s != '\0')
	{
		if (ft_putchar_fd_printf(*s, fd) == -1)
			return (-1);
		s++;
	}
	return (len);
}

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char)c;
	while (*str != '\0')
	{
		if (*str == ch)
		{
			return ((char *)str);
		}
		str++;
	}
	if (ch == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
