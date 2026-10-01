/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 08:36:12 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:25:06 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_int(long n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static	void	store_digits(long n, char *str, int *pos)
{
	if (n > 9)
		store_digits(n / 10, str, pos);
	str[*pos] = (n % 10) + '0';
	(*pos)++;
}

char	*ft_itoa(int n)
{
	long	num;
	int		size;
	int		pos;
	char	*str;

	num = n;
	size = count_int(num);
	if (num < 0)
	{
		num = -num;
		size++;
	}
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	pos = 0;
	if (n < 0)
		str[pos++] = '-';
	store_digits(num, str, &pos);
	str[pos] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int	m = 234;
	printf("%d\n", count_int(m));
	printf("%s\n", ft_itoa(m));
	return (0);
}
*/
