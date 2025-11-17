/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:23:35 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/13 09:24:51 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("Votez");
	t_list *n2 = ft_lstnew("mchauvin!");
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	int size = ft_lstsize(head);
	printf("%d\n", size);
}*/