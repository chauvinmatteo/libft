/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:21:19 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/13 10:51:52 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;

	head = NULL;
	n1 = ft_lstnew(ft_strdup("mchauvin!"));
	n2 = ft_lstnew(ft_strdup("Votez"));
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	printf("Before deletion : %s %s\n ", (char *)head->content,
		(char *)head->next->content);
	ft_lstdelone(n1, free);
	n1 = NULL;
	if (!n1)
		printf("Element deleted successfully.\n");
	printf("Remaining element : %s\n", (char *)head->content);
	return (0);
}*/
