/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:59:00 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 14:27:13 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	n;

	n = 0;
	while (s[n])
	{
		write(fd, &(s[n]), 1);
		n++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	ft_putendl_fd("Hello", 1);
	return (0);
}
*/
