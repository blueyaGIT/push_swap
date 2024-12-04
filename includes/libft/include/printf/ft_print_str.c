/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:32:59 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/03 12:28:35 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	if (!str)
	{
		return (ft_putstr_fd_printf("(null)", 1));
	}
	return (ft_putstr_fd_printf(str, 1));
}
