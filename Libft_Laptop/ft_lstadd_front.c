/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayanemail@student.42.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:41:11 by jbalayan          #+#    #+#             */
/*   Updated: 2026/10/01 16:34:29 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("Old first node");
	new = ft_lstnew("New first node");

	printf("Before:\n");
	printf("First node: %s\n", (char *)lst->content);

	ft_lstadd_front(&lst, new);

	printf("\nAfter:\n");
	printf("First node: %s\n", (char *)lst->content);
	printf("Second node: %s\n", (char *)lst->next->content);

	return (0);
}
*/
