/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:02:37 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/22 16:24:52 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//Copy all the bytes of src to dst.
//Return the orginal address of dst with overwritten copied of src.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;
	size_t				i;

	ptr_dst = dst;
	ptr_src = src;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}
// #include <stdio.h>

// int main()
// {
//     //String Test
//     char str[] = "Hello World";
//     char dst1[20];

//     ft_memcpy(dst1, str, sizeof(str));
//     printf("String test: %s\n", dst1);

//     // Int Test
//     int num = 42;
//     int dst2 = 0;

//     ft_memcpy(&dst2, &num, sizeof(num));
//     printf("Integer test: %d\n", dst2);
//     return (0);
// }