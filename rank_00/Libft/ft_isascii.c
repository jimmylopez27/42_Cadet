/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 16:19:55 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/22 16:21:28 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
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
// 		printf("Num: %d\n", ft_isascii(c));
// 		i++;
// 	}
// 	return (0);
// }