/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:02:26 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:16:56 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares the 2 string by char at most n.
// Automatically returns s1 - s2 if not equal.
// If all equal up to n, returns 0.
// If n = 0, returns 0.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";

	printf("Result: %d\n", ft_strncmp(str1, str2, 4));
	return (0);
}
*/
