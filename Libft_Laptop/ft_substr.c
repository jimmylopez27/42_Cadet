/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayanemail@student.42.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:53:28 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:23:16 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*str_dup(const char *s, char *ptr, size_t len, size_t start)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// Takes orginal s string.
// Duplicate new string defined by pointer "ptr".
// Duplication will start on "start" and end on "len".
// Return the pointer of the substring.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = length(s);
	if (start >= s_len)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > s_len - start)
		len = s_len - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	return (str_dup(s, ptr, len, start));
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "hello world!";
	char	*s2;

	s2 = ft_substr(s1, 6, 12);
	printf("s2:%s\n", s2);
	free(s2);
	s2 = ft_substr(s1, 6, 20);
	printf("s2:%s\n", s2);
	free(s2);
	s2 = ft_substr(s1, 14, 20);
	printf("s2:%s\n", s2);
	free(s2);
	return (0);
}
*/
