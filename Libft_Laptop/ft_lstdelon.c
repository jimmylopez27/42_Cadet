/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelon.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 18:29:25 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/08 21:11:02 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete_content(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		num1;
	int		num3;
	int		*num2;
	t_list	node1;
	t_list	*node2;
	t_list	node3;

	num1 = 1;
	num3 = 3;
	num2 = malloc(sizeof(int));
	if (!num2)
		return (1);
	*num2 = 2;
	node2 = ft_lstnew(num2);
	if (!node2)
	{
		free(num2);
		return (1);
	}
	node1.content = &num1;
	node1.next = node2;
	node3.content = &num3;
	node3.next = NULL;
	node2->next = &node3;

	printf("BEFORE DELETION:\n");
	printf("Node 1 address: %p\n", (void *)&node1);
	printf("Node 1 next: %p\n", (void *)node1.next);
	printf("Node 2 address: %p\n", (void *)node2);
	printf("Node 2 next: %p\n", (void *)node2->next);
	printf("Node 3 address: %p\n", (void *)&node3);
	printf("Node 3 next: %p\n", (void *)node3.next);

	node1.next = NULL;
	ft_lstdelone(node2, free);
	node2 = NULL;

	printf("\nAFTER DELETION:\n");
	printf("Node 1 address: %p\n", (void *)&node1);
	printf("Node 1 next: %p\n", (void *)node1.next);
	printf("Node 2 address: %p\n", (void *)node2);
	printf("Node 3 address: %p\n", (void *)&node3);
	printf("Node 3 next: %p\n", (void *)node3.next);
	return (0);
}
*/