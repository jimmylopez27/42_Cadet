/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:33:50 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 07:08:04 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hellTG789e231";
// 	int	i;
// 	int	c;

// 	i = 0;
// 	while (str[i])
// 	{
// 		c = str[i];
// 		printf("Num: %d\n", ft_isalpha(c));
// 		i++;
// 	}
// 	return (0);
// }
