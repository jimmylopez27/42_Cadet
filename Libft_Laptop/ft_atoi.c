/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:58:28 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 11:09:18 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1[] = "   -42abc";
	char test2[] = "--36478bncjd";
	char test3[] = "+12345xyz";
	char test4[] = "  +0";

	printf("Test1 (\"%s\") = %d\n", test1, ft_atoi(test1));
	printf("Test2 (\"%s\") = %d\n", test2, ft_atoi(test2));
	printf("Test3 (\"%s\") = %d\n", test3, ft_atoi(test3));
	printf("Test4 (\"%s\") = %d\n", test4, ft_atoi(test4));

	return (0);
}
*/
