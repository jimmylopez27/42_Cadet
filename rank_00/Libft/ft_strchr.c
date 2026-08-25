/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 14:07:36 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/16 13:51:30 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Looks for first c in *s and return c if found.
// If C is not foundm return NULL.
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello World!";
// 	char	*p;
// 	int		i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		printf("str[%c] = %p\n", str[i], (void *)&str[i]);
// 		i++;
// 	}
// 	printf("str[%c] = %p\n", str[i], (void *)&str[i]);

// 	p = ft_strchr(str, 'o');

// 	printf("return (address = %p\n", (void *)p));

// 	return (0);
// }