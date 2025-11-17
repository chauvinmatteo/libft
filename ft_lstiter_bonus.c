/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:52:52 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 10:44:29 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	while (lst)
	{
		tmp = lst->next;
		f(lst->content);
		lst = tmp;
	}
}
/*
static void	ft_to_upper(void *content)
{
	char	*str;

	str = (char *)content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

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
	printf("Before function : %s %s\n ", (char *)head->content,
		(char *)head->next->content);
	ft_lstiter(head, ft_to_upper);
	printf("After function : %s %s\n ", (char *)head->content,
		(char *)head->next->content);
	return (0);
}*/