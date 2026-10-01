/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayanemail@student.42.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:28:37 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:20:50 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Takes the size of byte and how many will be allocated.
// Returns the pointer to the allocated memory.
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		i;

	str = ft_calloc(5, sizeof(char));
	i = 0;
	while (i < 5)
	{
		printf("[%d] %d\n", i, str[i]);
		i++;
	}
	return (0);
}
*/
