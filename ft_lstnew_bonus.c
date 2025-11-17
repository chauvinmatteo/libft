/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:11:05 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/12 14:50:49 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *lst;

	lst = ft_lstnew("hihi 42");
	if (!lst)
		return (1);

	printf("Content  : %s\n", (char*)lst->content);
	printf("Next     : %p\n", (void *)lst->next);

	free(lst);
	return (0);
}*/