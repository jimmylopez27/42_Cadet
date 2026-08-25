/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 23:58:16 by jbalayan          #+#    #+#             */
/*   Updated: 2026/07/13 14:31:30 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// Takes a string and split the string every delimeter.
// Allocate memory for each new substrings.
// NULL if allocation fails.

static int	word_count(const char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			n++;
		i++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

static int	del_count (const char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	return (n);
}

static int	s

char **ft_split(char const *s, char c)
{
	char	**ns;
	int	i;
	int	j;
	int	k;

	if (!s)
		return (NULL);
	ns = malloc((word_count(s, c) + 1) * sizeof(char));
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i] != c)
		{
			ns[k] = malloc()
			ns[k][j] = s[i];
			j++;
		}
		k++;
		i++;
	}
	return (ns);
}

#include <stdio.h>

int	main(void)
{
	char	*s1 = ",,hello,world,good,morning,universe";
	char	c = ',';

	printf("Word: %d\n", word_count(s1, c));
	printf("Delimeter: %d\n", del_count(s1, c));

	return (0);
}
