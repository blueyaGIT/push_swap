/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:56:44 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/27 21:31:52 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE_GNL
#  define BUFFER_SIZE_GNL 32
# endif

/* ---------- GNL ------------ */
char	*get_next_line(int fd);

/* ---------- UTILS ---------- */
size_t	ft_strlen_gnl(const char *s);
char	*ft_strchr_gnl(const char *s, int c);
char	*ft_strjoin_gnl(char *s1, const char *s2);
char	*ft_strdup_gnl(const char *s1);
char	*ft_strndup_gnl(const char *s, size_t n);
int		read_and_store(int fd, char **storage);
char	*extract_line(char **storage);

#endif /* GET_NEXT_LINE_H */