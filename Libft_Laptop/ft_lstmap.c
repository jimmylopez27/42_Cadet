/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 23:23:49 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/08 23:29:28 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>
void	*double_number(void *content)
{
	int	*num;

	num = malloc(sizeof(int));
	if (!num)
		return (NULL);
	*num = *(int *)content * 2;
	return (num);
}

int	main(void)
{
	int num1;
	int num2;
	t_list node1;
	t_list node2;
	t_list *new_list;

	num1 = 10;
	num2 = 20;
	node1.content = &num1;
	node1.next = &node2;
	node2.content = &num2;
	node2.next = NULL;

	new_list = ft_lstmap(&node1, double_number, free);
	if (!new_list || !new_list->next || !new_list->content
		|| !new_list->next->content)
	{
		ft_lstclear(&new_list, free);
		return (1);
	}
	printf("ORIGINAL LIST:\n");
	printf("Node 1: %d\n", num1);
	printf("Node 2: %d\n", num2);

	printf("\nNEW LIST:\n");
	printf("Node 1: %d\n", *(int *)new_list->content);
	printf("Node 2: %d\n", *(int *)new_list->next->content);

	ft_lstclear(&new_list, free);
	return (0);
}
*/