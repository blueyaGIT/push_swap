/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:15:32 by dalbano           #+#    #+#             */
/*   Updated: 2024/11/19 12:13:41 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*alloc_word(const char *s, int len)
{
	char	*word;

	word = (char *)ft_calloc((len + 1), sizeof(char));
	if (word)
	{
		ft_strlcpy(word, s, len + 1);
	}
	else
		return (NULL);
	return (word);
}

static void	free_split(char **split, int words)
{
	while (words-- > 0)
		free(split[words]);
	free(split);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	process_word(char **split, const char *s, int *start, char c)
{
	int	temp;

	temp = *start;
	while (s[temp] && s[temp] != c)
		temp++;
	split[0] = alloc_word(s + *start, temp - *start);
	if (!split[0])
		return (0);
	*start = temp;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		idx;
	int		start;
	int		words;

	idx = 0;
	start = 0;
	words = count_words(s, c);
	split = (char **)malloc((words + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	while (s[start])
	{
		if (s[start] != c)
		{
			if (!process_word(&split[idx++], s, &start, c))
				return (free_split(split, idx - 1), NULL);
		}
		else
			start++;
	}
	split[idx] = NULL;
	return (split);
}
