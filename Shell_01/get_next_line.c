/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:48:58 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/10 16:44:03 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *get_next_line(int fd)
{
	char    buffer[BUFFER_SIZE + 1];
	
	fd = 
	read(fd, buffer, BUFFER_SIZE);
		
}

