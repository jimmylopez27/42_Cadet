/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 16:16:29 by jbalayan          #+#    #+#             */
/*   Updated: 2026/06/22 16:18:52 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
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
// 		printf("Num: %d\n", ft_isalnum(c));
// 		i++;
// 	}
// 	return (0);
// }