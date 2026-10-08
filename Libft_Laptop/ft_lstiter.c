/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 22:18:00 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/08 23:21:05 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
void	to_upperCase(void *content)
{
	char	*str;
	int		i;

	if (!content)
		return ;
	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

t_list	*create_node(char *str)
{
	char	*content;
	t_list	*node;

	content = ft_strdup(str);
	if (!content)
		return (NULL);
	node = ft_lstnew(content);
	if (!node)
		free(content);
	return (node);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = create_node("hello");
	node2 = create_node("world");
	node3 = create_node("libft");
	if (!node1 || !node2 || !node3)
	{
		ft_lstdelone(node1, free);
		ft_lstdelone(node2, free);
		ft_lstdelone(node3, free);
		return (1);
	}
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	printf("BEFORE:\n");
	printf("Node 1: %s\n", (char *)node1->content);
	printf("Node 2: %s\n", (char *)node2->content);
	printf("Node 3: %s\n", (char *)node3->content);
	ft_lstiter(node1, to_upperCase);
	printf("\nAFTER:\n");
	printf("Node 1: %s\n", (char *)node1->content);
	printf("Node 2: %s\n", (char *)node2->content);
	printf("Node 3: %s\n", (char *)node3->content);
	ft_lstclear(&node1, free);
	return (0);
}
*/