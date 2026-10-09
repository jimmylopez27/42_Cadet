/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 14:26:10 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/09 14:53:38 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Looks for last c in *s and return c if found.
// If C is not found return NULL.
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World!";
	char	*p;
	int		i;

	i = 0;
	while (str[i])
	{
		printf("str[%c] = %p\n", str[i], (void *)&str[i]);
		i++;
	}
	printf("str[%c] = %p\n", str[i], (void *)&str[i]);

	p = ft_strrchr(str, 'o');

	printf("return (address = %p\n)", (void *)p);

	return (0);
}
*/
