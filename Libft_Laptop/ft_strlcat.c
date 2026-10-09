/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:26:41 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/09 13:31:05 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Concats the src to dst given dstsize.
// Assumes that dst src are null terminated.
// Leave one byte for the null terminator.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst_len < dstsize && dst[dst_len])
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
		char    str[] = "World!";
		char    dst[8] = "Hello ";
		size_t  len;

		len = ft_strlcat(dst, str, sizeof(dst));
		printf("Len: %zu\n", len);
		printf("Dst: %s\n", dst);
		return (0);
}
*/
