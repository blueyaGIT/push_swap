/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:46:18 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 11:39:38 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar_fd_printf(char c, int fd);
int		ft_putnbr_fd_printf(int n, int fd);
int		ft_putstr_fd_printf(char *s, int fd);
size_t	ft_strlen_printf(const char *str);
char	*ft_strchr_p(const char *str, int c);

int		ft_printf(const char *inputstring, ...);
int		ft_print_str(char *str);
int		ft_print_nbr(int n);
int		ft_print_unbr(unsigned long n);
int		ft_print_voidptr(unsigned long long ptr);
int		ft_print_hex_nbr(unsigned int n, int upper, int initlen);

#endif
