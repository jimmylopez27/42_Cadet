/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:08:18 by jbalayan          #+#    #+#             */
/*   Updated: 2026/09/30 16:46:12 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	chypering_function(unsigned int n, char *str)
{
	(void)n;

	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	else *str += 32;		
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	n;

	n = 0;
	while (s[n] != '\0')
	{
		f(n, &s[n]);
		n++;
	}
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "Hello";

	printf("OLD: %s\n", str);
	ft_striteri(str, chypering_function);
	printf("NEW: %s\n", str);
	return (0);
}
*/
