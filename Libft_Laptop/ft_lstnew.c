/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:10:05 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/08 20:45:43 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str1;
	t_list	*node;
	t_list	*node1;

	str = "Hello 42!";
	node = ft_lstnew(str);
	if (!node)
		return (1);
	printf("Content: %s\n", (char *)node->content);
	printf("node address: %p\n", (void *)node);

	str1 = "Hello World";
	node1 = ft_lstnew(str1);
	if (!node1)
			return (1);
	printf("Content: %s\n", (char *)node1->content);
	printf("node1 address: %p\n", (void *)node1);

	free(node);
	free(node1);
	return (0);
}
*/
