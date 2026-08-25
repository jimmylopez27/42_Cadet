/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:26:41 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/22 16:25:09 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strlen(const char *str);

// Concats the src to dst given dstsize.
// Assumes that dst src are null terminated.
// dst - 1 for null after concat.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (dst[i])
	{
		i++;
	}
	j = 0;
	while (j < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	str[] = "World!";
// 	char	dst[20] = "Hello ";
// 	int	len;

// 	len = ft_strlcat(dst, str, 3);
// 	printf("Len: %d\n", len);
// 	printf("Dst: %s\n", dst);
// 	return (0);
// }