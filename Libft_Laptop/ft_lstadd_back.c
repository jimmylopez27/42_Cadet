/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:54:54 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/08 18:27:02 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
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
	t_list	*head;
	t_list	**ptr;

	num1 = 1;
	num2 = 2;
	num3 = 3;
	head = &node1;
	node1.content = &num1;
	node1.next = NULL;
	node2.content = &num2;
	node2.next = NULL;
	node1.next = &node2;
	node3.content = &num3;
	node3.next = NULL;
	ptr = &head;
	printf("BEFORE:\n");
	printf("Head: %p\n", (void *)head);
	printf("node2.next: %p\n", (void *)node2.next);
	ft_lstadd_back(ptr, &node3);
	printf("\nAFTER:\n");
	printf("Head: %p\n", (void *)head);
	printf("node2.next: %p\n", (void *)node2.next);
	printf("node3 address: %p\n", (void *)&node3);
	return (0);
}
*/