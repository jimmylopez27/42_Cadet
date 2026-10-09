/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 21:13:13 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/08 23:34:15 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(NULL);
	node2 = ft_lstnew(NULL);
	node3 = ft_lstnew(NULL);
	if (!node1 || !node2 || !node3)
	{
		free(node1);
		free(node2);
		free(node3);
		return (1);
	}
	node1->next = node2;
	node2->next = node3;
	printf("BEFORE CLEAR:\n");
	printf("Node 1: %p\n", (void *)node1);
	printf("Node 2: %p\n", (void *)node2);
	printf("Node 3: %p\n", (void *)node3);
	node1->next = NULL;
	ft_lstclear(&node2, free);
	node3 = NULL;
	printf("\nAFTER CLEAR:\n");
	printf("Node 1: %p\n", (void *)node1);
	printf("Node 1 next: %p\n", (void *)node1->next);
	printf("Node 2: %p\n", (void *)node2);
	printf("Node 3: %p\n", (void *)node3);
	free(node1);
	return (0);
}
*/