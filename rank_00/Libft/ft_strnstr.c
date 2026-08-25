/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 14:54:08 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/16 15:23:59 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	check(const char *needle, const char *haystack, size_t i, size_t len)
{
	size_t	m;

	m = 0;
	while (needle[m] && i + m < len && needle[m] == haystack[i + m])
	{
		m++;
	}
	return (needle[m] != '\0');
}

// Looks for substring in haystack..
//...and returns the first address of the substring.
// If the substring is empty, returns the first address of haystack.
// If not found, returns NULL.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (needle[0] == haystack[i])
		{
			if (check(needle, haystack, i, len) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char haystack[] = "Hello";
// 	char needle[] = "ll";
// 	int i = 0;

// 	while (haystack[i])
// 	{
// 		printf("haystack[%c]: %p\n", haystack[i], &(haystack[i]));
// 		i++;
// 	}
// 	printf("Address of haystack: %p\n", ft_strnstr(haystack, needle,
// 			sizeof(haystack)));
// 	return (0);
// }