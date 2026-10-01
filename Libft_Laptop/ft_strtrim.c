/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayanemail@student.42.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:58:27 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:24:12 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_dup(char s1, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (s1 == set[j])
			return (1);
		j++;
	}
	return (0);
}

static size_t	start_pos(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && check_dup(s1[i], set))
		i++;
	return (i);
}

static size_t	end_pos(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	while (i > 0 && check_dup(s1[i - 1], set))
		i--;
	return (i);
}

static size_t	length(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = start_pos(s1, set);
	end = end_pos(s1, set);
	if (end < start)
		return (0);
	return (end - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = start_pos(s1, set);
	end = end_pos(s1, set);
	ptr = malloc(length(s1, set) + 1);
	if (!ptr)
		return (NULL);
	i = start;
	j = 0;
	while (i < end)
		ptr[j++] = s1[i++];
	ptr[j] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "xhelloxyworldy";
	char	set[] = "xy";
	char	*s2;

	printf("s1: %s\n", s1);
	s2 = ft_strtrim(s1, set);
	printf("s2: %s\n", s2);
	free(s2);
	return (0);
}
*/
