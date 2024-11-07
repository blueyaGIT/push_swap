/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:03:11 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/14 11:12:05 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFF_SIZE 100

int				ft_atoi(const char *str);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isalnum(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void			*ft_memchr(const void *ptr, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			*ft_calloc(size_t count, size_t size);

char			*ft_strchr(const char *str, int c);
char			*ft_strdup(char *src);
char			*ft_strrchr(const char *str, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strnstr(const char *src, const char *to_find, size_t len);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_itoa(int n);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);

unsigned int	ft_strlcat(char *dest, char const *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t			ft_strlen(const char *str);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));

#endif /* LIBFT_H */