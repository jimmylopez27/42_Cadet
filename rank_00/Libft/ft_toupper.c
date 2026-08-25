/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayanemail@student.42.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:34:10 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/23 15:20:09 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World!";
	int		i;
	int		n;

	i = 0;
	while (str[i])
	{
		n = str[i];
		printf("%c", ft_toupper(n));
		i++;
	}
	printf("\n");
	return (0);
}
*/
