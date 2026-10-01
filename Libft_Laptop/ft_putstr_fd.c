/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:37:08 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:26:47 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	n;

	n = 0;
	while (s[n])
	{
		write(fd, &(s[n]), 1);
		n++;
	}
}
/*
int	main(void)
{
	ft_putstr_fd("Hello", 1);
	write(1, "\n", 1);
	return (0);
}
*/
