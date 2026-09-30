/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:50:26 by jbalayan          #+#    #+#             */
/*   Updated: 2026/09/29 13:00:47 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	counter(char const *s)
{
	unsigned int	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}

char	chypering_function(unsigned int n, char c)
{
	char	new_text;

	(void)n;
	if (c >= 'a' && c <= 'z')
		new_text = c - 32;
	else
		new_text = c + 32;
	return (new_text);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_size;
	unsigned int	n;
	char			*new_str;

	s_size = counter(s);
	n = 0;
	new_str = malloc((s_size + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (n < s_size)
	{
		new_str[n] = f(n, s[n]);
		n++;
	}
	new_str[n] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *words = "HellO";
	printf("%s\n", ft_strmapi(words, chypering_function));

	return (0);
}
*/