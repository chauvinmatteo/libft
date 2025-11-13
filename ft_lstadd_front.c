/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 08:38:06 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/13 09:10:17 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("mchauvin!");
	t_list *n2 = ft_lstnew("Votez");

	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	printf("%s ", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	return (0);
}*/