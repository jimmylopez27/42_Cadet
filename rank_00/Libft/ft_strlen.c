/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:58:48 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/15 13:11:33 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts how many chararcters are in the string.
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello World!";
// 	int	len;

// 	len = ft_strlen(str);
// 	printf("Len is: %d", len);

// 	return (0);
// }