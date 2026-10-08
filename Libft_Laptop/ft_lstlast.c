/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 10:58:31 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/08 11:33:13 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node_nav;

	node_nav = lst;
	if (node_nav == NULL)
	{
		return (NULL);
	}
	while (node_nav->next != NULL)
	{
		node_nav = node_nav->next;
	}
	return (node_nav);
}
/*
#include <stdio.h>
int	main(void)
{
	int		num1;
	int		num2;
	int		num3;
	t_list	node1;
	t_list	node2;
	t_list	node3;
	t_list	*last_node = NULL;

	num1 = 1;
	num2 = 2;
	num3 = 3;
	node1.content = &num1;
	node1.next = NULL;
	node2.content = &num2;
	node2.next = NULL;
	node1.next = &node2;
	node3.content = &num3;
	node3.next = NULL;
	node2.next = &node3;
	printf("Address of node1.next: %p\n", (void *)node1.next);
	printf("Address of node2: %p\n", &node2);
	printf("Address of node2.next: %p\n", (void *)node2.next);
	printf("Address of node3: %p\n", &node3);
	last_node = ft_lstlast(&node1);
	printf("Last Node Content: %d\n", *(int *)last_node->content);
        printf("Address of last_node:  %p\n", (void *)last_node);
        printf("Address of node3:      %p\n", &node3);	
	return (0);
}
*/
