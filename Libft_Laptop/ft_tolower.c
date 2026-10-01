/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayanemail@student.42.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:20:54 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 10:03:02 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;

	char	str[]  = "HELLO WORLD!";
	i = 0;
	while (str[i])
	{
		n = ft_tolower(str[i]);
		printf("%c", n);
		i++;
	}
	printf("\n");
	return (0);
}
*/
