/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:26:15 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/13 09:39:50 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("Comme une");
	t_list *n2 = ft_lstnew("envie de");
	t_list *n3 = ft_lstnew("mourir");

	ft_lstadd_front(&head, n3);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n1);
	printf("%s\n", (char *)ft_lstlast(head)->content);
}*/