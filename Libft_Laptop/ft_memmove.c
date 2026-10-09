/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 16:18:58 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/09 13:27:29 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copies len bytes from src to dst.
//Safe even if src and dst are located in the overlapping of memory regions.
// Handles both forward and backward copying.
//Returns the orginal address of dst.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;
	size_t				i;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (const unsigned char *)src;
	if (ptr_dst > ptr_src)
	{
		while (len > 0)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	//Case 1: diff. memory block;
	char	Str0[] = "Hello";
	char	Dest0[20];

	ft_memmove(Dest0, Str0, sizeof(Str0));
	printf("Dest0: %s\n", Dest0);
	//Case 2: same memory block (backward-copy);
	char	Str1[] = "Hello";
	ft_memmove(Str1 + 2, Str1, 3);
	printf("Str1: %s\n", Str1);

	//Case 2.2: same memory block (forward-copy)
	char Str2[] = "Hello";
	ft_memmove(Str2, Str2 + 2, 3);
	printf("Str2: %s\n", Str2);
	return (0);
}
*/
