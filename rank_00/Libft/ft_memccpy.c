/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:07:11 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/22 16:24:33 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//Copy all the bytes from src to dst until and including c.
//Return the pointer after c.
void	*ft_memccpy(void *dst, const void *src, int c,
		size_t n)
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
		if (ptr_src[i] == (unsigned char)c)
		{
			return (&ptr_dst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int	main(void)
// {
// 	// String Test
// 	char	src[] = "Hello World!";
// 	char	dest[20];
// 	char	*ret;

// 	ret = ft_memccpy(dest, src, 'd', 13);
// 	if (ret)
// 		*ret = '\0';
// 	else
// 		dest[13] = '\0';
// 	printf("Dest: %s\n", dest);
// 	return (0);
// }