/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:53:13 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/27 21:32:03 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char **storage)
{
	char	*newline_pos;
	char	*line;
	char	*remaining;

	if (!storage || !*storage)
		return (NULL);
	newline_pos = ft_strchr_gnl(*storage, '\n');
	if (newline_pos)
	{
		line = ft_strndup_gnl(*storage, newline_pos - *storage + 1);
		if (!line)
			return (NULL);
		remaining = ft_strdup_gnl(newline_pos + 1);
		free(*storage);
		*storage = remaining;
	}
	else
	{
		line = ft_strdup_gnl(*storage);
		free(*storage);
		*storage = NULL;
	}
	return (line);
}

int	read_and_store(int fd, char **storage)
{
	char	buffer[BUFFER_SIZE_GNL + 1];
	ssize_t	bytes_read;
	char	*temp;

	if (!*storage)
		*storage = ft_strdup_gnl("");
	bytes_read = read(fd, buffer, BUFFER_SIZE_GNL);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		temp = ft_strjoin_gnl(*storage, buffer);
		if (!temp)
			return (-1);
		free(*storage);
		*storage = temp;
		if (ft_strchr_gnl(buffer, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE_GNL);
	}
	if (bytes_read == 0 && *storage && **storage)
		return (0);
	return (bytes_read);
}

char	*get_next_line(int fd)
{
	static char	*storage = NULL;
	int			result;

	if (fd < 0 || BUFFER_SIZE_GNL <= 0)
		return (NULL);
	result = read_and_store(fd, &storage);
	if (result < 0 || (result == 0 && (!storage || !*storage)))
	{
		free(storage);
		storage = NULL;
		return (NULL);
	}
	return (extract_line(&storage));
}

// #include <stdio.h>

// int main() {
//     int fd = open("example.txt", O_RDONLY);
//     char *line;

//     while ((line = get_next_line(fd)) != NULL) {
//         printf("%s", line);
//         free(line);
//     }
//     close(fd);
//     return 0;
// }
