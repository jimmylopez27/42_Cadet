/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 09:04:28 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/15 10:41:51 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Searches the first n bytes of memory for the character c.
// Returns a pointer to the matching byte, or NULL if not found.
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s;
	size_t				i;

	ptr_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
		{
			return ((void *)(ptr_s + i));
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	// Case 1: String
// 	char str[] = "Hello";
// 	char *c;

// 	c = ft_memchr(str, 'x', 4);
// 	if (c)
// 		printf("Result: %c\n", *c);
// 	else
// 		printf("C not found.\n");

// 	// Case 2: Int
// 	int num[] = {1, 2, 3, 4, 5};
// 	char *n;

// 	n = ft_memchr(num, 4, sizeof(num));
// 	if (n)
// 		printf("Result: %u\n", *n);
// 	else
// 		printf("C not found.\n");
// 	return (0);
// }