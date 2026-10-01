/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:48:00 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:13:14 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Converts all the bytes of the given memory block to zero up to n.
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_s;
	size_t			i;

	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr_s[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	// String Test
	char	str[] = "Hello";
	ft_bzero(str, sizeof(str));
	printf("Str: %s\n", str);

	// Int Test
	int	num = 42;
	ft_bzero(&num, sizeof(num));
	printf("Num: %d\n", num);
	return (0);
}
*/
