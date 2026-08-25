/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayanemail@student.42.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:58:27 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/30 23:54:14 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	check_dup(char s1, char const *set)
{
	size_t	j;
	size_t	n;

	j = 0;
	while (set[j])
	{
		if (s1 == set[j])
		{
			n = 1;
			return (n);
		}
		j++;
	}
	return (0);
}

static size_t	length(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check_dup(s1[i], set) == 0)
		{
			j++;
		}
		i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	ptr = malloc(length(s1, set) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		if (check_dup(s1[i], set) == 0)
		{
			ptr[j] = s1[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "hello world";
	char	set[] = "ol";
	char	*s2;

	printf("s1: %s\n", s1);
	s2 = ft_strtrim(s1, set);
	printf("s2: %s\n", s2);
	return (0);
}
*/
