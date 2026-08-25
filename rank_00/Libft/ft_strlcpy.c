/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:44:31 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/22 16:25:21 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *str); // Remove and replace it with #include "libft.h"

// This copies all the char from src to dst but -1 for null terminator.
// Return the full size of src.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello World";
// 	char	dst[20];
// 	int	src_size;

// 	src_size = ft_strlcpy(dst, str, 5);
// 	printf("Src size: %d\n", src_size);
// 	printf("Dst: %s\n", dst);
// 	return (0);
// }