/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 22:38:44 by jbalayan          #+#    #+#             */
/*   Updated: 2026/09/30 22:38:47 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*ft_make_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_split(char **split, size_t count)
{
	while (count > 0)
	{
		count--;
		free(split[count]);
	}
	free(split);
}

static int	ft_fill_split(char **split, char const *s, char c)
{
	size_t	word;

	word = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		split[word] = ft_make_word(s, c);
		if (!split[word])
		{
			ft_free_split(split, word);
			return (0);
		}
		word++;
		while (*s && *s != c)
			s++;
	}
	split[word] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *)
			* (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	if (!ft_fill_split(split, s, c))
		return (NULL);
	return (split);
}