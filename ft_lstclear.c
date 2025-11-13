/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:28:04 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/13 11:41:08 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *head;
	t_list *n1;
	t_list *n2;

	head = NULL;
	n1 = ft_lstnew(ft_strdup("mchauvin!"));
	n2 = ft_lstnew(ft_strdup("Votez"));
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	printf("Before deletion : %s %s\n ", (char *)head->content,
		(char *)head->next->content);
	ft_lstclear(&head, free);
	head = NULL;
	if (!head)
		printf("Element deleted successfully.\n");
	printf("Remaining element : %s\n", (char *)head);
	return (0);
}*/