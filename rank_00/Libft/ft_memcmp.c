/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 11:03:36 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/15 12:32:08 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Compares s1 to s2 by byte.
// If all n are equal return 0.
// Otherwise return the first difference of s1 - s2.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	//Case 0: String
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello";

// 	printf("Result: %d\n", ft_memcmp(str1, str2, 5));
// 	//Case 1: Int
// 	int	arr1[] = {1, 2, 3, 4, 5};
// 	int	arr2[] = {1, 2, 3, 4, 7};

// 	printf("Result: %d\n", ft_memcmp(arr1, arr2, sizeof(arr1)));
// 	return (0);
// }