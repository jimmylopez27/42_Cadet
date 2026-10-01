/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 16:12:30 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 07:52:51 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
// 		printf("Num: %d\n", ft_isdigit(c));
// 		i++;
// 	}
// 	return (0);
// }
