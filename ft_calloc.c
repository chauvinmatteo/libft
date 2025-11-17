/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:48:12 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/17 10:52:59 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	if (nmemb && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*#include <stdio.h>

int	main(void)
{
	int *tab;

	tab = ft_calloc(5, sizeof(int));
	if (!tab)
	{
		printf("Allocation error\n");
		return (1);
	}

	printf("First element : %d\n", tab[0]);
	free(tab);
	return (0);
}*/