/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:17:36 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:12:18 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Similar to bzero, but can set any byte value instead of only 0.
// Fills the first len bytes of memory pointed by b with c.
// Returns the original address pointed by b.
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>

int	main(void)
{
	// String Test
	char	str[] = "Hello";
	ft_memset(str, 'a', sizeof(str));
	str[5] = '\0';
	printf("Str: %s\n", str);
	// Int Test
	int	num = 42;
	ft_memset(&num, 0, sizeof(num));
	printf("Num: %d\n", num);
	return (0);
}
*/
