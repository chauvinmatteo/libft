/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:45:48 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/13 09:58:17 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("mchauvin!");
	t_list *n2 = ft_lstnew("Votez");

	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n1);
	printf("%s ", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	return (0);
}*/