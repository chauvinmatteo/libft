/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:10:10 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/13 17:10:21 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*newlst;
	char	*content;

	if (!lst)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmp);
		lst = lst->next;
	}
	return (newlst);
}
/*void	*ft_to_upper(void *content)
{
	char	*str;
	char	*newlst;
	char *tmp;

	str = (char *)content; 
	newlst = ft_strdup(str);
	tmp = newlst;
	if (!newlst)
		return(NULL);
	while (*tmp)
	{
		*tmp = ft_toupper(*tmp);
		tmp++;
	}
	return (newlst);
}

#include <stdio.h>

int	main(void)
{
	t_list *head;
	t_list *newlst;
	t_list *n1;
	t_list *n2;

	newlst = NULL;
	head = NULL;
	n1 = ft_lstnew(ft_strdup("mchauvin!"));
	n2 = ft_lstnew(ft_strdup("Votez"));
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	printf("Before function : %s %s\n ", (char *)head->content,
		(char *)head->next->content);
	newlst = ft_lstmap(head, ft_to_upper, free);
	printf("New list : %s %s\n ", (char *)newlst->content,
		(char *)newlst->next->content);
	return (0);
}*/