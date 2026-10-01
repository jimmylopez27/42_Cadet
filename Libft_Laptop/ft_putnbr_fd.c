/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:10:35 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:27:41 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	m;
	char	c;

	m = n;
	if (m < 0)
	{
		write(fd, "-", 1);
		m *= -1;
	}
	if (m >= 10)
		ft_putnbr_fd(m / 10, fd);
	c = (m % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
		ft_putnbr_fd(123, 1);
		write(1, "\n", 1);
		return (0);
}
*/
